#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)171;
long long int var_2 = -2412317405630113551LL;
signed char var_5 = (signed char)87;
unsigned short var_8 = (unsigned short)25707;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3549669570U;
void init() {
}

void checksum() {
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
