#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4835366880078164823ULL;
unsigned long long int var_1 = 9694012062395591367ULL;
unsigned char var_2 = (unsigned char)87;
signed char var_3 = (signed char)-124;
unsigned long long int var_4 = 4952053975921856131ULL;
unsigned char var_6 = (unsigned char)130;
unsigned long long int var_7 = 10210486565189568540ULL;
unsigned char var_8 = (unsigned char)128;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)46;
unsigned short var_13 = (unsigned short)7646;
int var_14 = -1561318047;
void init() {
}

void checksum() {
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
