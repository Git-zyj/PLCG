#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)26935;
int var_8 = -2057770193;
short var_9 = (short)-5986;
int var_10 = 1398406421;
long long int var_11 = -1918542106919243516LL;
short var_12 = (short)21352;
long long int var_13 = -1948412103036528840LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)54442;
_Bool var_17 = (_Bool)0;
long long int var_18 = -2427370497111655705LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
