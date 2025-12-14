#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4286532735U;
unsigned long long int var_7 = 16633062892303225505ULL;
unsigned short var_8 = (unsigned short)56715;
short var_10 = (short)16524;
unsigned short var_12 = (unsigned short)62725;
signed char var_15 = (signed char)-3;
unsigned long long int var_17 = 1473180069974773578ULL;
int zero = 0;
unsigned int var_20 = 3366666996U;
short var_21 = (short)-5503;
void init() {
}

void checksum() {
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
