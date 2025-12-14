#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56645;
long long int var_6 = -5598702091693235006LL;
long long int var_7 = -2348861918030965906LL;
long long int var_11 = -3734576686456085197LL;
long long int var_12 = -7100842120374574644LL;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)48058;
int zero = 0;
short var_17 = (short)-24372;
unsigned long long int var_18 = 8355488900198999178ULL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 832963344U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
