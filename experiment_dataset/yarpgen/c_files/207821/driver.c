#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -895944425;
int var_7 = 937072256;
unsigned char var_8 = (unsigned char)223;
int var_12 = -491122729;
unsigned char var_15 = (unsigned char)212;
unsigned char var_17 = (unsigned char)131;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)2;
int zero = 0;
int var_20 = -894180058;
unsigned char var_21 = (unsigned char)173;
int var_22 = -1747638728;
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
