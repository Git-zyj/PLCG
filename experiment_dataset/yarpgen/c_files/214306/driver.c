#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3604303375U;
unsigned long long int var_2 = 12587335043441045564ULL;
unsigned int var_5 = 1477495779U;
unsigned short var_6 = (unsigned short)1693;
unsigned short var_9 = (unsigned short)22032;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 2943020594U;
unsigned long long int var_14 = 559064477439299969ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
