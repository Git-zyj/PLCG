#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3321577951U;
unsigned char var_4 = (unsigned char)97;
unsigned short var_9 = (unsigned short)7369;
unsigned int var_10 = 4004530316U;
int var_11 = -1359999631;
int zero = 0;
int var_14 = 1884988464;
signed char var_15 = (signed char)119;
signed char var_16 = (signed char)-19;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
