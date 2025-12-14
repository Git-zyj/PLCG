#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = -662856606605864361LL;
long long int var_3 = -4097153413168563327LL;
int var_5 = -1999666384;
unsigned char var_7 = (unsigned char)219;
unsigned long long int var_8 = 16015356904909697203ULL;
int zero = 0;
unsigned int var_15 = 2777310645U;
signed char var_16 = (signed char)-2;
void init() {
}

void checksum() {
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
