#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
int var_4 = 1062623410;
int var_5 = 262516276;
long long int var_6 = 9052300224137168875LL;
unsigned char var_8 = (unsigned char)214;
short var_9 = (short)-26284;
long long int var_11 = -4749550207825596381LL;
unsigned int var_12 = 644070498U;
short var_16 = (short)15335;
short var_17 = (short)31591;
_Bool var_18 = (_Bool)1;
long long int var_19 = -206357468316067275LL;
int zero = 0;
unsigned short var_20 = (unsigned short)46609;
int var_21 = -1232379266;
int var_22 = -691630712;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
