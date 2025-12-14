#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13218768740463486153ULL;
_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)647;
short var_11 = (short)5068;
signed char var_12 = (signed char)116;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 18399087648453474228ULL;
short var_20 = (short)-20710;
void init() {
}

void checksum() {
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
