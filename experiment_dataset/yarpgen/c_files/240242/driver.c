#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21441;
long long int var_2 = -7962156017955979308LL;
unsigned short var_5 = (unsigned short)44658;
signed char var_10 = (signed char)67;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = -8094561965713401470LL;
long long int var_14 = 7451770423373170881LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
