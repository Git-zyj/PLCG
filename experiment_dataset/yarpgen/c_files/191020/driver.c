#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28725;
long long int var_3 = 5787224653352646540LL;
unsigned char var_5 = (unsigned char)3;
long long int var_6 = 3241081791899275704LL;
unsigned int var_9 = 163750547U;
int zero = 0;
signed char var_10 = (signed char)105;
unsigned char var_11 = (unsigned char)202;
int var_12 = 1217213522;
signed char var_13 = (signed char)-110;
unsigned short var_14 = (unsigned short)19992;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
