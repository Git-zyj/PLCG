#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)9727;
unsigned short var_5 = (unsigned short)2869;
long long int var_8 = -5507499694660609263LL;
signed char var_10 = (signed char)-44;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1237498881U;
unsigned int var_13 = 3202773948U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
