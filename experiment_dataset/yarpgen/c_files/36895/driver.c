#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1496;
int var_5 = 221905619;
signed char var_8 = (signed char)111;
int var_10 = 334486979;
unsigned long long int var_12 = 9637744786564191427ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 17178958283978867183ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
