#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1742647124;
unsigned long long int var_3 = 9402926301504973839ULL;
short var_10 = (short)-24056;
_Bool var_11 = (_Bool)0;
unsigned char var_14 = (unsigned char)211;
unsigned long long int var_16 = 1959607849443590878ULL;
int zero = 0;
long long int var_17 = 2962125836892256076LL;
short var_18 = (short)27713;
short var_19 = (short)-4063;
unsigned int var_20 = 2819807010U;
int var_21 = 1555456525;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
