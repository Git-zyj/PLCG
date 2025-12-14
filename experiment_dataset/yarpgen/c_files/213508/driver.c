#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1539668572U;
unsigned char var_2 = (unsigned char)175;
unsigned int var_3 = 2919070847U;
short var_4 = (short)22618;
signed char var_6 = (signed char)-81;
short var_7 = (short)-3800;
int var_8 = -812395473;
unsigned int var_10 = 1723587203U;
int zero = 0;
unsigned long long int var_11 = 7409399058804951074ULL;
short var_12 = (short)14734;
unsigned int var_13 = 4216919705U;
_Bool var_14 = (_Bool)0;
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
