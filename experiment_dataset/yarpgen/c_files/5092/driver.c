#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17089206346056202045ULL;
short var_3 = (short)-3957;
short var_10 = (short)-25999;
unsigned int var_11 = 516033546U;
signed char var_12 = (signed char)-12;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -2574919396270561793LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
