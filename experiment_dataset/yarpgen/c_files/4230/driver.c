#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)57;
int var_11 = -261506539;
signed char var_16 = (signed char)-68;
unsigned int var_18 = 1331983297U;
int zero = 0;
int var_19 = -1454266686;
short var_20 = (short)-21640;
unsigned short var_21 = (unsigned short)1394;
unsigned short var_22 = (unsigned short)17732;
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
