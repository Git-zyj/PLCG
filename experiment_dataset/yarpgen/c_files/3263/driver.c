#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5201041666060521291ULL;
long long int var_6 = 7319245262980095147LL;
signed char var_13 = (signed char)-115;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)28906;
int zero = 0;
short var_19 = (short)-26858;
signed char var_20 = (signed char)-2;
signed char var_21 = (signed char)15;
int var_22 = 1260719220;
long long int var_23 = 3339833322665416131LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
