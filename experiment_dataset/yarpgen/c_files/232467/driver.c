#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)44900;
signed char var_12 = (signed char)57;
unsigned short var_14 = (unsigned short)36669;
unsigned short var_17 = (unsigned short)1286;
int zero = 0;
unsigned int var_19 = 3579567787U;
int var_20 = 1645590272;
unsigned char var_21 = (unsigned char)215;
unsigned int var_22 = 1482791151U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
