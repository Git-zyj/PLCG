#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_3 = (unsigned short)9028;
unsigned short var_4 = (unsigned short)20940;
unsigned char var_9 = (unsigned char)19;
int var_10 = 642786130;
int var_12 = 601082027;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = -3549943907009890627LL;
void init() {
}

void checksum() {
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
