#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58356;
unsigned int var_3 = 3166145480U;
unsigned long long int var_6 = 1342242540785699569ULL;
unsigned long long int var_7 = 14153037798987797747ULL;
long long int var_9 = 7828585738271106325LL;
unsigned char var_11 = (unsigned char)181;
_Bool var_12 = (_Bool)1;
long long int var_13 = 1048664695587786350LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)57;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
