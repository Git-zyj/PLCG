#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)108;
_Bool var_1 = (_Bool)1;
int var_3 = 163061149;
unsigned int var_4 = 1545272632U;
signed char var_5 = (signed char)7;
short var_7 = (short)6249;
unsigned int var_9 = 2200193450U;
long long int var_12 = -1175655432169573039LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
