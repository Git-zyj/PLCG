#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13366111004262217015ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 747211065U;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-4094;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 11996793153492373288ULL;
short var_16 = (short)-9217;
void init() {
}

void checksum() {
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
