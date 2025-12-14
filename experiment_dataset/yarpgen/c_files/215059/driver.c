#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10850077826072679479ULL;
unsigned short var_2 = (unsigned short)28564;
unsigned short var_3 = (unsigned short)11821;
long long int var_4 = -3252732605716207491LL;
signed char var_8 = (signed char)113;
unsigned short var_13 = (unsigned short)54749;
short var_16 = (short)20472;
int zero = 0;
long long int var_19 = 8112217162173661257LL;
unsigned int var_20 = 2272956491U;
long long int var_21 = 8355971376174301576LL;
int var_22 = 222584936;
void init() {
}

void checksum() {
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
