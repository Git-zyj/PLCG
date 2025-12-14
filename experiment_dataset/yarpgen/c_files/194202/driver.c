#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2065016843;
long long int var_1 = 2912252745539377507LL;
short var_4 = (short)-29415;
unsigned long long int var_8 = 12020373446653366430ULL;
unsigned short var_9 = (unsigned short)10408;
int zero = 0;
int var_15 = 1614751092;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
