#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3085761627U;
unsigned long long int var_9 = 4006555631536146513ULL;
unsigned char var_13 = (unsigned char)89;
unsigned int var_14 = 2887260836U;
unsigned int var_18 = 2545599651U;
int zero = 0;
unsigned int var_20 = 1793282671U;
unsigned long long int var_21 = 5893104297663165003ULL;
unsigned short var_22 = (unsigned short)6129;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
