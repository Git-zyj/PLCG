#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_5 = (signed char)-72;
long long int var_6 = -3155142023600051781LL;
long long int var_12 = -3000450618585634297LL;
unsigned short var_15 = (unsigned short)45428;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 14911418638267911456ULL;
unsigned short var_20 = (unsigned short)7756;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
