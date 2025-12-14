#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10310699437155698557ULL;
long long int var_3 = 301868956461294564LL;
int var_5 = -868511209;
signed char var_7 = (signed char)35;
unsigned char var_9 = (unsigned char)106;
short var_11 = (short)7650;
unsigned int var_12 = 1611692087U;
signed char var_13 = (signed char)-68;
int zero = 0;
signed char var_15 = (signed char)-1;
unsigned short var_16 = (unsigned short)18027;
int var_17 = 113382511;
void init() {
}

void checksum() {
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
