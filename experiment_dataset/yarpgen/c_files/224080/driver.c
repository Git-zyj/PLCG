#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-93;
unsigned int var_2 = 2020767278U;
long long int var_4 = 1173520772822572348LL;
unsigned int var_5 = 4124963158U;
int var_8 = 507394450;
unsigned char var_11 = (unsigned char)189;
signed char var_12 = (signed char)-90;
int zero = 0;
unsigned int var_14 = 2122119919U;
_Bool var_15 = (_Bool)1;
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
