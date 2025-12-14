#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)32142;
_Bool var_4 = (_Bool)0;
unsigned short var_12 = (unsigned short)58990;
int zero = 0;
unsigned short var_16 = (unsigned short)38118;
long long int var_17 = 1992372767674586741LL;
short var_18 = (short)31131;
short var_19 = (short)-3355;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
