#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7702364823224616127LL;
unsigned short var_1 = (unsigned short)63549;
signed char var_3 = (signed char)-33;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)18778;
int zero = 0;
unsigned int var_11 = 1432267728U;
unsigned short var_12 = (unsigned short)41620;
unsigned short var_13 = (unsigned short)37660;
unsigned short var_14 = (unsigned short)19057;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
