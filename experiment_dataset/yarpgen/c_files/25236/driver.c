#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)182;
_Bool var_8 = (_Bool)0;
short var_9 = (short)24718;
long long int var_13 = -2230544265211725159LL;
int zero = 0;
short var_15 = (short)4982;
signed char var_16 = (signed char)-65;
long long int var_17 = 1628885328254918589LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
