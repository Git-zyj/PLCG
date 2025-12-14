#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11200;
unsigned short var_3 = (unsigned short)15876;
short var_5 = (short)-19993;
signed char var_6 = (signed char)-29;
unsigned long long int var_9 = 14980758808700003845ULL;
unsigned int var_10 = 616948656U;
int zero = 0;
unsigned long long int var_12 = 17987841880455529636ULL;
unsigned int var_13 = 3754792882U;
short var_14 = (short)-7578;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
