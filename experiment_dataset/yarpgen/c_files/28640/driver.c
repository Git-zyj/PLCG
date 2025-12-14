#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_7 = 487995189429915122LL;
short var_10 = (short)-15692;
unsigned short var_12 = (unsigned short)38431;
int zero = 0;
short var_15 = (short)-24491;
short var_16 = (short)21445;
unsigned short var_17 = (unsigned short)26525;
signed char var_18 = (signed char)-47;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
