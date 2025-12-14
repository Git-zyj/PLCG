#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17747840452293491704ULL;
_Bool var_4 = (_Bool)0;
long long int var_8 = -2228223171239561773LL;
unsigned short var_10 = (unsigned short)23110;
int zero = 0;
long long int var_12 = 5891767991174952705LL;
unsigned char var_13 = (unsigned char)100;
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
