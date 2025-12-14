#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 2150986291603562136ULL;
short var_12 = (short)20008;
int zero = 0;
signed char var_19 = (signed char)-52;
unsigned short var_20 = (unsigned short)47325;
unsigned short var_21 = (unsigned short)62759;
void init() {
}

void checksum() {
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
