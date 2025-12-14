#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3928839897837477338LL;
unsigned char var_4 = (unsigned char)0;
unsigned int var_6 = 4090311625U;
unsigned long long int var_10 = 14863795339226863605ULL;
unsigned int var_11 = 1225151026U;
int zero = 0;
unsigned int var_13 = 2982975847U;
unsigned char var_14 = (unsigned char)83;
signed char var_15 = (signed char)-90;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
