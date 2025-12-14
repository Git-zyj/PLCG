#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-38;
unsigned int var_12 = 2931147900U;
signed char var_13 = (signed char)124;
unsigned short var_14 = (unsigned short)14614;
unsigned long long int var_16 = 5594295201046041634ULL;
int zero = 0;
signed char var_20 = (signed char)4;
unsigned char var_21 = (unsigned char)85;
short var_22 = (short)-25275;
unsigned short var_23 = (unsigned short)46109;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
