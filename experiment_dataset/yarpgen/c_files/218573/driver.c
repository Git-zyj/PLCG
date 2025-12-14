#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)21979;
unsigned char var_7 = (unsigned char)188;
unsigned long long int var_8 = 2367469566307089169ULL;
unsigned long long int var_9 = 20106271846249887ULL;
_Bool var_10 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)91;
void init() {
}

void checksum() {
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
