#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2109666352;
_Bool var_2 = (_Bool)1;
int var_8 = -654590535;
int zero = 0;
signed char var_13 = (signed char)126;
long long int var_14 = 4226908709835765194LL;
signed char var_15 = (signed char)-90;
void init() {
}

void checksum() {
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
