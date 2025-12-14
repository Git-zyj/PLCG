#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1013367156;
short var_8 = (short)-10017;
unsigned char var_10 = (unsigned char)44;
short var_16 = (short)-10401;
int zero = 0;
signed char var_18 = (signed char)113;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 6285141367281388017ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
