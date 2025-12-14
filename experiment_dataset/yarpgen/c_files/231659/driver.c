#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5133092509707014137LL;
short var_2 = (short)13765;
short var_4 = (short)21438;
unsigned int var_5 = 3285488872U;
unsigned short var_8 = (unsigned short)505;
short var_9 = (short)10625;
int var_11 = 1337528952;
unsigned short var_15 = (unsigned short)47362;
_Bool var_19 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-59;
signed char var_21 = (signed char)-34;
void init() {
}

void checksum() {
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
