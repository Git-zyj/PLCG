#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)0;
int var_8 = -280038739;
int var_9 = 350297267;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 9446995669135032812ULL;
int var_13 = 1632251969;
int var_14 = -2135116324;
int zero = 0;
unsigned int var_15 = 1527479198U;
unsigned int var_16 = 1657551814U;
int var_17 = 400581252;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
