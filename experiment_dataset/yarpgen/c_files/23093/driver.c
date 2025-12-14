#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)26;
unsigned char var_5 = (unsigned char)53;
unsigned long long int var_6 = 14813720424644355138ULL;
unsigned int var_7 = 3670882600U;
_Bool var_12 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_20 = -1247341514580515195LL;
signed char var_21 = (signed char)47;
signed char var_22 = (signed char)-63;
_Bool var_23 = (_Bool)1;
long long int var_24 = 1538058834342524105LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
