#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)76;
_Bool var_1 = (_Bool)0;
unsigned long long int var_4 = 9882205300134116484ULL;
int var_5 = 1345293176;
unsigned int var_8 = 2670095850U;
unsigned long long int var_9 = 11506523463951838925ULL;
signed char var_11 = (signed char)-61;
int zero = 0;
signed char var_12 = (signed char)-54;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
