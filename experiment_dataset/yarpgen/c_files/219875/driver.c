#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14571;
unsigned short var_4 = (unsigned short)20847;
unsigned long long int var_5 = 17197105951780517372ULL;
unsigned short var_6 = (unsigned short)15622;
unsigned long long int var_8 = 5885284188401342258ULL;
long long int var_11 = 7198794833858305987LL;
unsigned short var_13 = (unsigned short)36593;
signed char var_15 = (signed char)-124;
int var_16 = -1323885750;
unsigned long long int var_17 = 9679215614376756675ULL;
unsigned short var_18 = (unsigned short)11117;
int zero = 0;
signed char var_19 = (signed char)5;
unsigned int var_20 = 1721639613U;
short var_21 = (short)-9461;
long long int var_22 = -3408812080678796185LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
