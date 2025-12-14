#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)41674;
unsigned char var_6 = (unsigned char)232;
short var_10 = (short)-70;
_Bool var_12 = (_Bool)1;
signed char var_16 = (signed char)6;
int zero = 0;
unsigned int var_17 = 2557320997U;
unsigned char var_18 = (unsigned char)61;
unsigned int var_19 = 3322679749U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
