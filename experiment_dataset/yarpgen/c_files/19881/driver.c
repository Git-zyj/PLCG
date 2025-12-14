#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3475081552U;
_Bool var_7 = (_Bool)0;
int var_9 = -336136982;
int var_12 = -1197039202;
_Bool var_15 = (_Bool)0;
long long int var_17 = -6833831148439303257LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)119;
unsigned short var_21 = (unsigned short)48430;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
