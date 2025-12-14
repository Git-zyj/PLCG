#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)170;
signed char var_3 = (signed char)95;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)31110;
unsigned short var_8 = (unsigned short)33912;
int var_9 = -1102953172;
short var_12 = (short)-9033;
unsigned short var_14 = (unsigned short)61049;
int var_16 = -781070209;
int zero = 0;
long long int var_17 = 1241793277525441273LL;
unsigned short var_18 = (unsigned short)32755;
int var_19 = -477404619;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
