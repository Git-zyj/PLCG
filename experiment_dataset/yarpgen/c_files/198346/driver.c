#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12069298706152939325ULL;
unsigned int var_4 = 1274294414U;
unsigned long long int var_6 = 13496101663473655277ULL;
short var_7 = (short)7617;
signed char var_10 = (signed char)94;
short var_15 = (short)4193;
int zero = 0;
unsigned int var_18 = 1675731030U;
int var_19 = -209068996;
int var_20 = -1747017994;
unsigned long long int var_21 = 2147989543600375722ULL;
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
