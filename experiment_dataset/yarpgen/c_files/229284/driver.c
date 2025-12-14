#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)25903;
signed char var_4 = (signed char)-4;
unsigned int var_5 = 3205874789U;
short var_7 = (short)-909;
int var_9 = -2065502685;
signed char var_11 = (signed char)117;
int zero = 0;
unsigned long long int var_12 = 337186080961919069ULL;
signed char var_13 = (signed char)-46;
int var_14 = -952851554;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
