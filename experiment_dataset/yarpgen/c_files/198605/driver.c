#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)109;
signed char var_7 = (signed char)5;
unsigned int var_11 = 3081201077U;
unsigned short var_12 = (unsigned short)44559;
unsigned short var_15 = (unsigned short)22217;
int zero = 0;
long long int var_17 = 8152510187873292402LL;
signed char var_18 = (signed char)-53;
void init() {
}

void checksum() {
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
