#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)174;
unsigned int var_8 = 569667227U;
unsigned short var_13 = (unsigned short)24178;
unsigned int var_14 = 1347177442U;
int zero = 0;
unsigned short var_18 = (unsigned short)4930;
unsigned short var_19 = (unsigned short)33351;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
