#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-106;
long long int var_4 = 1405421366582462004LL;
signed char var_7 = (signed char)-24;
int var_8 = 261691008;
short var_10 = (short)-19021;
int zero = 0;
unsigned short var_12 = (unsigned short)17670;
unsigned short var_13 = (unsigned short)42379;
signed char var_14 = (signed char)-113;
_Bool var_15 = (_Bool)1;
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
