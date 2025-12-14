#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 459491143U;
long long int var_1 = 5714614176787625206LL;
unsigned int var_2 = 3862993257U;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)61639;
unsigned short var_6 = (unsigned short)9771;
long long int var_7 = 8460692881335609910LL;
long long int var_8 = -467923639887535587LL;
unsigned short var_9 = (unsigned short)48812;
unsigned int var_10 = 4018174905U;
int zero = 0;
unsigned int var_11 = 830774305U;
int var_12 = 578125753;
unsigned int var_13 = 1792497762U;
long long int var_14 = 6205166026450837211LL;
unsigned char var_15 = (unsigned char)13;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
