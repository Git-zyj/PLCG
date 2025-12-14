#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15462452457371188210ULL;
short var_1 = (short)-4398;
long long int var_2 = -5776171406072705067LL;
unsigned long long int var_4 = 4718552971597759591ULL;
unsigned int var_6 = 2609036786U;
unsigned int var_7 = 153995467U;
unsigned long long int var_8 = 4643975251024253446ULL;
unsigned short var_9 = (unsigned short)41029;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)100;
int zero = 0;
unsigned short var_12 = (unsigned short)43511;
unsigned long long int var_13 = 9473689155985996845ULL;
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
