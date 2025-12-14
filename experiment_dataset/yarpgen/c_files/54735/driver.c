#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5718101380660771317LL;
_Bool var_3 = (_Bool)1;
long long int var_7 = 5853438647079710751LL;
unsigned long long int var_8 = 7867470953049296308ULL;
signed char var_10 = (signed char)-6;
int zero = 0;
signed char var_14 = (signed char)-44;
short var_15 = (short)20703;
void init() {
}

void checksum() {
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
