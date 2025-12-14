#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)122;
unsigned long long int var_3 = 10305179938525810993ULL;
unsigned int var_4 = 2182997464U;
unsigned short var_7 = (unsigned short)23834;
int var_11 = 1073260252;
short var_13 = (short)22040;
short var_17 = (short)18997;
int zero = 0;
int var_19 = -618923000;
unsigned long long int var_20 = 12135273426433192570ULL;
unsigned char var_21 = (unsigned char)142;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
