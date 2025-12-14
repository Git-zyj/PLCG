#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)69;
unsigned int var_3 = 608877176U;
unsigned int var_4 = 3703123890U;
signed char var_7 = (signed char)46;
_Bool var_11 = (_Bool)1;
int var_13 = -1698746237;
int zero = 0;
unsigned short var_14 = (unsigned short)28855;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)62967;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
