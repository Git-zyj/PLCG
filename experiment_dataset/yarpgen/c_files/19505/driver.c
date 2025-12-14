#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1180912216;
int var_3 = -227932999;
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)-44;
unsigned long long int var_8 = 7314287122780443668ULL;
int var_11 = 1190347050;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)55307;
long long int var_16 = 1443576327959108157LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)28221;
short var_19 = (short)2581;
signed char var_20 = (signed char)-71;
signed char var_21 = (signed char)35;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
