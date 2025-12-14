#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-126;
short var_2 = (short)28858;
unsigned long long int var_3 = 15539651292548748209ULL;
unsigned long long int var_5 = 277436107268448591ULL;
int var_8 = 714729491;
unsigned int var_11 = 1872702661U;
unsigned short var_12 = (unsigned short)19880;
int zero = 0;
signed char var_14 = (signed char)28;
long long int var_15 = -6377538424544561939LL;
long long int var_16 = 2069734315671867747LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
