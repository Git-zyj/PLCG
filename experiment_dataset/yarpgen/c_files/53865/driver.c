#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)27;
long long int var_5 = 4112278417999243035LL;
unsigned char var_6 = (unsigned char)8;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 11787964000614770822ULL;
short var_13 = (short)-29987;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
