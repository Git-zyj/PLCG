#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8741;
int var_3 = -1034226300;
unsigned int var_9 = 4270491348U;
_Bool var_14 = (_Bool)0;
long long int var_15 = 8903071829646796330LL;
long long int var_16 = 2842925712299032190LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -1536737405600154659LL;
unsigned int var_19 = 2410078611U;
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
