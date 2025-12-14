#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25375;
long long int var_1 = -5078740398052133966LL;
signed char var_3 = (signed char)-14;
int var_6 = 588105173;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)183;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-4744;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
