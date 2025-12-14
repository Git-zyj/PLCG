#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1682667319U;
unsigned char var_5 = (unsigned char)182;
unsigned short var_7 = (unsigned short)52977;
unsigned short var_8 = (unsigned short)51532;
signed char var_12 = (signed char)-1;
unsigned int var_13 = 3473995597U;
unsigned long long int var_14 = 6373093127111924505ULL;
unsigned int var_17 = 2040739787U;
signed char var_18 = (signed char)51;
unsigned long long int var_19 = 11859616877419949834ULL;
int zero = 0;
unsigned int var_20 = 2827284044U;
short var_21 = (short)19369;
unsigned long long int var_22 = 8638234013520571282ULL;
void init() {
}

void checksum() {
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
