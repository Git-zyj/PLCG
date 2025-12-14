#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4507908098424478322ULL;
unsigned long long int var_1 = 11525802733822445331ULL;
signed char var_3 = (signed char)-74;
unsigned short var_4 = (unsigned short)1052;
_Bool var_5 = (_Bool)1;
unsigned long long int var_8 = 10301921224152653980ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)174;
unsigned long long int var_13 = 11052729540323892229ULL;
unsigned char var_14 = (unsigned char)164;
long long int var_15 = 4619803863640725780LL;
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
