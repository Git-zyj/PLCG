#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9116580255021658100LL;
signed char var_2 = (signed char)-81;
_Bool var_3 = (_Bool)0;
signed char var_6 = (signed char)-47;
unsigned int var_7 = 539046691U;
long long int var_8 = 536109024919110723LL;
signed char var_10 = (signed char)-95;
short var_11 = (short)17961;
signed char var_12 = (signed char)-73;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
long long int var_15 = -4088367655893655954LL;
signed char var_16 = (signed char)107;
short var_17 = (short)4905;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
