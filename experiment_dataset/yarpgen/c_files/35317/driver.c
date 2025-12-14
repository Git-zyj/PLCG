#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3368514163911206111LL;
unsigned int var_1 = 1501237621U;
unsigned short var_2 = (unsigned short)21390;
short var_4 = (short)-15336;
unsigned long long int var_7 = 9495980842076833696ULL;
long long int var_9 = -4700118654610473912LL;
long long int var_13 = 8741773564293530502LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)93;
short var_16 = (short)-14079;
signed char var_17 = (signed char)13;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
