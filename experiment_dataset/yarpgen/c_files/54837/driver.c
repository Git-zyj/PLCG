#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-87;
unsigned int var_5 = 1471804434U;
long long int var_7 = 4176497215646712853LL;
unsigned char var_9 = (unsigned char)129;
unsigned short var_10 = (unsigned short)40746;
unsigned long long int var_17 = 3675824444509561553ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)62;
unsigned char var_21 = (unsigned char)135;
unsigned int var_22 = 2648552320U;
unsigned int var_23 = 803440018U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
