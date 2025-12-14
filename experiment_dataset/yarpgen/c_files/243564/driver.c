#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)192;
short var_3 = (short)-540;
short var_4 = (short)-11611;
long long int var_5 = -8414938512117838592LL;
short var_9 = (short)-30791;
short var_10 = (short)27213;
int zero = 0;
signed char var_12 = (signed char)65;
long long int var_13 = -4628092689712000793LL;
void init() {
}

void checksum() {
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
