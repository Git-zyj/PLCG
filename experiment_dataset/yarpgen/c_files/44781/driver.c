#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)16415;
signed char var_13 = (signed char)88;
_Bool var_14 = (_Bool)0;
unsigned long long int var_16 = 6285252310251033703ULL;
int zero = 0;
short var_17 = (short)-18615;
unsigned long long int var_18 = 17064860153891137117ULL;
short var_19 = (short)-20670;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
