#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3627181912785486404LL;
unsigned int var_3 = 930621486U;
unsigned long long int var_7 = 13423529066903189080ULL;
_Bool var_10 = (_Bool)1;
long long int var_12 = 3578162929960119404LL;
signed char var_13 = (signed char)-7;
short var_14 = (short)-16772;
int zero = 0;
unsigned int var_18 = 3800059532U;
int var_19 = 2115357591;
unsigned int var_20 = 1824829953U;
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
