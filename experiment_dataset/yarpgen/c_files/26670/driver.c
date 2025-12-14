#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1081134014U;
signed char var_3 = (signed char)-31;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)221;
unsigned int var_8 = 519302364U;
signed char var_11 = (signed char)84;
int var_16 = -1080149028;
int zero = 0;
unsigned long long int var_19 = 3145796186772198030ULL;
short var_20 = (short)-4839;
unsigned char var_21 = (unsigned char)84;
unsigned short var_22 = (unsigned short)61416;
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
