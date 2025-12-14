#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3539824419178645833LL;
unsigned int var_4 = 2288298919U;
unsigned short var_13 = (unsigned short)34085;
_Bool var_14 = (_Bool)0;
signed char var_16 = (signed char)(-127 - 1);
int var_17 = -1904274441;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 247427234U;
signed char var_21 = (signed char)1;
int var_22 = -1728336620;
void init() {
}

void checksum() {
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
