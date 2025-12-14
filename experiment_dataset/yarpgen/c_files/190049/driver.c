#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-8;
_Bool var_2 = (_Bool)0;
unsigned int var_6 = 3528938567U;
unsigned short var_7 = (unsigned short)56337;
signed char var_11 = (signed char)-98;
unsigned short var_12 = (unsigned short)43494;
short var_13 = (short)13662;
int zero = 0;
int var_14 = -989177977;
unsigned int var_15 = 1122432952U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
