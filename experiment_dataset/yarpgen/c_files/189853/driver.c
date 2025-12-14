#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1246419288;
unsigned char var_1 = (unsigned char)184;
long long int var_2 = -4490835595142945521LL;
unsigned char var_3 = (unsigned char)41;
long long int var_4 = -8385175358429813857LL;
signed char var_8 = (signed char)-29;
unsigned int var_9 = 4135767282U;
unsigned short var_11 = (unsigned short)18483;
int zero = 0;
short var_13 = (short)9129;
short var_14 = (short)-8848;
signed char var_15 = (signed char)11;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
