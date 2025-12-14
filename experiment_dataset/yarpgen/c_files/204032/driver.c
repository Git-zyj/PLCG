#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9839471112172297367ULL;
signed char var_8 = (signed char)98;
short var_9 = (short)29191;
unsigned long long int var_13 = 283378436079380886ULL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)25267;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)45462;
long long int var_20 = -1785458715564727233LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
