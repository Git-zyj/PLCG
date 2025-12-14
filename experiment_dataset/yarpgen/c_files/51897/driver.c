#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-28;
_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned char var_11 = (unsigned char)204;
unsigned short var_12 = (unsigned short)8381;
int zero = 0;
signed char var_14 = (signed char)112;
unsigned char var_15 = (unsigned char)197;
unsigned int var_16 = 3850194757U;
signed char var_17 = (signed char)-17;
unsigned int var_18 = 3979925706U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
