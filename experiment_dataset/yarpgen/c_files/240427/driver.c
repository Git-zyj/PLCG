#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-120;
short var_6 = (short)-4106;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int var_15 = -389628285;
unsigned long long int var_17 = 13766915964497325119ULL;
int zero = 0;
short var_20 = (short)13788;
int var_21 = -1880454939;
short var_22 = (short)7723;
int var_23 = -1476063299;
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
