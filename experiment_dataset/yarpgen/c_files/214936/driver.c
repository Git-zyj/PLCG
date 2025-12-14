#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)0;
signed char var_9 = (signed char)-4;
unsigned char var_14 = (unsigned char)60;
signed char var_15 = (signed char)-8;
int zero = 0;
signed char var_16 = (signed char)49;
int var_17 = 602102570;
unsigned long long int var_18 = 12054570420917428707ULL;
void init() {
}

void checksum() {
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
