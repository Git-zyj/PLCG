#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 537099718;
long long int var_2 = 4890211326138197461LL;
int var_3 = 2095873968;
int var_4 = 823291471;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)139;
signed char var_11 = (signed char)-43;
short var_15 = (short)10483;
int var_16 = 571291692;
int var_17 = 923896012;
int var_19 = 823304245;
int zero = 0;
unsigned char var_20 = (unsigned char)110;
short var_21 = (short)20562;
signed char var_22 = (signed char)-53;
int var_23 = 1626120258;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
