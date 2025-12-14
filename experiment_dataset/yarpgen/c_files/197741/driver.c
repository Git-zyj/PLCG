#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6762916971045016850LL;
_Bool var_6 = (_Bool)1;
short var_7 = (short)8502;
unsigned char var_8 = (unsigned char)36;
long long int var_9 = -6836512078204903705LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -4435570416661786907LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
