#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8905548110053821821ULL;
unsigned short var_1 = (unsigned short)17806;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 4115475790U;
unsigned char var_4 = (unsigned char)238;
unsigned long long int var_5 = 2112028388878160562ULL;
unsigned long long int var_8 = 13955145914522757834ULL;
unsigned short var_9 = (unsigned short)19977;
int zero = 0;
unsigned int var_11 = 288533252U;
long long int var_12 = 1059537529926280964LL;
long long int var_13 = -1054138870903634116LL;
unsigned char var_14 = (unsigned char)135;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
