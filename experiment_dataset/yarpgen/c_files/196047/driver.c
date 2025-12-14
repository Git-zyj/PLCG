#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)252;
signed char var_1 = (signed char)52;
unsigned int var_2 = 1290773790U;
unsigned short var_3 = (unsigned short)41425;
unsigned char var_5 = (unsigned char)87;
unsigned short var_7 = (unsigned short)26307;
signed char var_9 = (signed char)105;
int var_10 = -1355630979;
unsigned short var_11 = (unsigned short)20138;
int zero = 0;
long long int var_12 = 7270689858701984460LL;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)45;
unsigned short var_15 = (unsigned short)51168;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
