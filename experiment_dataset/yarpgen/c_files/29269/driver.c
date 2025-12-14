#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)14858;
int var_9 = 1609088506;
unsigned int var_10 = 2808807671U;
unsigned int var_13 = 1443710030U;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)69;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
