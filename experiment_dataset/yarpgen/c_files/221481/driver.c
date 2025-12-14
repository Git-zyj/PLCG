#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3018902842U;
_Bool var_7 = (_Bool)0;
long long int var_8 = -6917482475531913590LL;
_Bool var_10 = (_Bool)0;
unsigned int var_13 = 595277356U;
unsigned int var_14 = 1193253254U;
unsigned char var_15 = (unsigned char)114;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = 450229212;
void init() {
}

void checksum() {
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
