#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9423726094518568482ULL;
int var_2 = -1233778099;
unsigned char var_3 = (unsigned char)155;
unsigned short var_4 = (unsigned short)34680;
signed char var_5 = (signed char)-89;
unsigned int var_6 = 816127395U;
short var_8 = (short)5010;
unsigned int var_9 = 123289280U;
int zero = 0;
unsigned short var_10 = (unsigned short)59185;
int var_11 = -211249483;
unsigned long long int var_12 = 13433155647449784205ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
