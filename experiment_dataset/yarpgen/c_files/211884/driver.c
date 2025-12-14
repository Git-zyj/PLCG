#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-80;
unsigned long long int var_2 = 127252803188930609ULL;
signed char var_3 = (signed char)119;
int var_4 = -2036247472;
long long int var_6 = 5350651872647584626LL;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)92;
short var_14 = (short)-14214;
signed char var_15 = (signed char)-12;
unsigned int var_16 = 213497577U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
