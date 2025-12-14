#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-100;
unsigned char var_4 = (unsigned char)19;
unsigned long long int var_7 = 4863249098943318300ULL;
unsigned char var_8 = (unsigned char)73;
unsigned int var_9 = 3211925996U;
signed char var_13 = (signed char)105;
int var_14 = -1265532088;
unsigned char var_15 = (unsigned char)2;
unsigned int var_16 = 3644141725U;
int zero = 0;
signed char var_19 = (signed char)24;
signed char var_20 = (signed char)-101;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
