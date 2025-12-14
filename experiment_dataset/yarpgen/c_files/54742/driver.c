#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6478;
int var_2 = 554482126;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
int var_6 = -848555135;
short var_7 = (short)-4625;
unsigned short var_9 = (unsigned short)36105;
unsigned short var_10 = (unsigned short)43800;
int zero = 0;
unsigned int var_11 = 4059507544U;
unsigned short var_12 = (unsigned short)23747;
unsigned long long int var_13 = 14493564386089676372ULL;
short var_14 = (short)7402;
signed char var_15 = (signed char)29;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
