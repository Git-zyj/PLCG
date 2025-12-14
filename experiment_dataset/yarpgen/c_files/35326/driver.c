#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4723421284392009121LL;
unsigned char var_4 = (unsigned char)50;
long long int var_6 = -7214848028156084787LL;
int var_7 = -496365194;
unsigned long long int var_11 = 17660335618186658938ULL;
short var_12 = (short)20944;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_15 = -200086543;
int var_16 = 1217258374;
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
