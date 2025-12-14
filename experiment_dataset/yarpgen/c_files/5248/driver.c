#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -596844588;
int var_2 = 1199628681;
unsigned long long int var_3 = 15543555041382708820ULL;
unsigned short var_4 = (unsigned short)18724;
short var_9 = (short)-18897;
int zero = 0;
unsigned long long int var_13 = 6691204439981078154ULL;
unsigned long long int var_14 = 13798399879254545829ULL;
signed char var_15 = (signed char)101;
unsigned char var_16 = (unsigned char)62;
signed char var_17 = (signed char)-8;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
