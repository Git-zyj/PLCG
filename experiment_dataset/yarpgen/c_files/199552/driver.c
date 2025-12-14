#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8309;
unsigned long long int var_1 = 11158796570385389173ULL;
_Bool var_3 = (_Bool)1;
int var_6 = 1886858789;
unsigned char var_9 = (unsigned char)164;
_Bool var_10 = (_Bool)0;
unsigned int var_13 = 4016393838U;
int zero = 0;
signed char var_17 = (signed char)60;
signed char var_18 = (signed char)-36;
void init() {
}

void checksum() {
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
