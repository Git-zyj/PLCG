#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15789;
_Bool var_3 = (_Bool)1;
unsigned int var_11 = 1091349007U;
short var_15 = (short)6666;
long long int var_17 = -2755282137642212871LL;
int zero = 0;
signed char var_20 = (signed char)-72;
unsigned int var_21 = 2926554460U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
