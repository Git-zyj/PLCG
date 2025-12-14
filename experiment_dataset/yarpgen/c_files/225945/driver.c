#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17320453909459038776ULL;
int var_4 = -471796289;
unsigned int var_6 = 2165024768U;
unsigned long long int var_7 = 3695763671022736438ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)40074;
signed char var_11 = (signed char)-43;
unsigned short var_12 = (unsigned short)42930;
unsigned short var_13 = (unsigned short)15249;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
