#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3047652802U;
int var_5 = -1027701471;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)62807;
unsigned long long int var_8 = 11011397957995613123ULL;
unsigned long long int var_10 = 16921150346464960594ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2580848880U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
