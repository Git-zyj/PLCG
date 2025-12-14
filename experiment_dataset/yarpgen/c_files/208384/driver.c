#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4165388785U;
unsigned int var_7 = 2744040479U;
int var_8 = -211242986;
unsigned short var_9 = (unsigned short)41098;
unsigned short var_10 = (unsigned short)9805;
unsigned long long int var_12 = 6464921351472456402ULL;
unsigned short var_14 = (unsigned short)40177;
int zero = 0;
int var_15 = 1464245191;
unsigned int var_16 = 1168569502U;
unsigned short var_17 = (unsigned short)26966;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
