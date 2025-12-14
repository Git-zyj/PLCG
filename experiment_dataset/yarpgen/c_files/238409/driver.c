#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)54;
long long int var_2 = 6946873915250852102LL;
unsigned long long int var_3 = 14127373373687955645ULL;
signed char var_4 = (signed char)106;
unsigned char var_7 = (unsigned char)190;
unsigned int var_8 = 3272267021U;
int var_9 = 591494145;
unsigned int var_10 = 3883551223U;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)250;
int var_14 = -1680626176;
int zero = 0;
unsigned long long int var_15 = 10454621686053838229ULL;
unsigned int var_16 = 1940964181U;
unsigned long long int var_17 = 11051617898097936806ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
