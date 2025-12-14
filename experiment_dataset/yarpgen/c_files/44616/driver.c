#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2099434877163778305ULL;
unsigned long long int var_2 = 5736119897337373158ULL;
unsigned long long int var_3 = 16708065565824689827ULL;
unsigned short var_5 = (unsigned short)34952;
unsigned long long int var_6 = 15312071630568259546ULL;
unsigned char var_7 = (unsigned char)154;
unsigned long long int var_9 = 11099926818985756810ULL;
int zero = 0;
unsigned int var_10 = 129790977U;
unsigned long long int var_11 = 2832958076404274910ULL;
unsigned long long int var_12 = 11264587606230653449ULL;
unsigned int var_13 = 3117583265U;
unsigned long long int var_14 = 12171505621589146225ULL;
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
