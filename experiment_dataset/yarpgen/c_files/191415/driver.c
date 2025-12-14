#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14333991818513154100ULL;
signed char var_3 = (signed char)126;
unsigned int var_6 = 2996546829U;
int var_7 = -1025067784;
signed char var_9 = (signed char)-89;
unsigned int var_11 = 3744524353U;
long long int var_12 = -7995489366664954905LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)7;
short var_20 = (short)-10552;
unsigned int var_21 = 3656641035U;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 2800696408U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
