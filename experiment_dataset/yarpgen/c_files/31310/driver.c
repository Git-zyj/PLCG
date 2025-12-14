#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13140;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 1099972158U;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)80;
unsigned int var_14 = 2550703195U;
unsigned int var_15 = 789825157U;
int zero = 0;
unsigned long long int var_18 = 14961623942320598551ULL;
unsigned long long int var_19 = 5807088307565580079ULL;
unsigned char var_20 = (unsigned char)245;
unsigned char var_21 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
