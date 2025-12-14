#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14751895532050981758ULL;
unsigned int var_4 = 3868269704U;
long long int var_8 = -7684493018447535079LL;
unsigned char var_9 = (unsigned char)22;
long long int var_11 = -8642962169828106918LL;
long long int var_12 = 6921739662224903821LL;
short var_14 = (short)7926;
signed char var_15 = (signed char)-100;
int zero = 0;
unsigned short var_16 = (unsigned short)51704;
unsigned long long int var_17 = 16644007559462149927ULL;
signed char var_18 = (signed char)11;
void init() {
}

void checksum() {
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
