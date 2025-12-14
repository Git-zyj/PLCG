#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)227;
signed char var_1 = (signed char)-2;
short var_3 = (short)-19366;
short var_4 = (short)-23105;
signed char var_6 = (signed char)-45;
signed char var_10 = (signed char)-25;
unsigned char var_11 = (unsigned char)109;
int zero = 0;
short var_14 = (short)7899;
short var_15 = (short)-11254;
short var_16 = (short)-15293;
unsigned char var_17 = (unsigned char)62;
short var_18 = (short)-17119;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
