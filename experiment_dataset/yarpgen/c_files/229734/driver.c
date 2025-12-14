#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)19347;
short var_6 = (short)17408;
unsigned int var_7 = 4286579162U;
int var_9 = 1132948247;
int zero = 0;
unsigned int var_14 = 1746801138U;
_Bool var_15 = (_Bool)0;
int var_16 = 74363126;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
