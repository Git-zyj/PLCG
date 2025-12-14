#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 880509606U;
unsigned long long int var_4 = 14609220609770339899ULL;
unsigned long long int var_6 = 3870607413868214151ULL;
unsigned int var_7 = 1411078816U;
long long int var_8 = 7558664780863517588LL;
signed char var_11 = (signed char)-86;
unsigned int var_14 = 4177681103U;
signed char var_16 = (signed char)25;
int zero = 0;
int var_20 = -546902646;
int var_21 = -1249378609;
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
