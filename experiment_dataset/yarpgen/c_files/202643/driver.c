#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1316423386U;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 9600847440288946296ULL;
int zero = 0;
long long int var_12 = 6474926642360818697LL;
short var_13 = (short)-17497;
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
