#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2790894159U;
unsigned long long int var_2 = 7135118673478135199ULL;
signed char var_5 = (signed char)50;
long long int var_7 = -7755181072117637351LL;
unsigned long long int var_8 = 9116143119993489688ULL;
unsigned long long int var_10 = 16127722424357235463ULL;
unsigned char var_12 = (unsigned char)69;
unsigned long long int var_13 = 7528677067515630448ULL;
unsigned int var_16 = 3344161419U;
unsigned short var_17 = (unsigned short)32189;
int zero = 0;
long long int var_20 = 4547818263234295307LL;
unsigned long long int var_21 = 15079536633749283506ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
