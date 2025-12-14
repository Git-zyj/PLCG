#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 795641378;
signed char var_3 = (signed char)52;
unsigned int var_5 = 1275073439U;
unsigned long long int var_6 = 1275130509160752750ULL;
_Bool var_8 = (_Bool)0;
int var_9 = 676858321;
signed char var_14 = (signed char)-77;
short var_15 = (short)-31999;
unsigned short var_16 = (unsigned short)57033;
int zero = 0;
unsigned int var_18 = 3879058628U;
short var_19 = (short)-28860;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
