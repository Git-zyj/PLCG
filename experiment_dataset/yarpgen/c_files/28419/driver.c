#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-20;
unsigned int var_4 = 4291295352U;
long long int var_5 = -8334104145751361344LL;
int var_9 = 1279555189;
int var_10 = -417290216;
long long int var_12 = 7933929740392222897LL;
int var_18 = 1105255207;
int zero = 0;
unsigned int var_20 = 1039933530U;
unsigned int var_21 = 3060658208U;
int var_22 = -239675449;
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
