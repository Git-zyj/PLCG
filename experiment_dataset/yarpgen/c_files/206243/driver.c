#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1398416424620602495ULL;
int var_1 = 295800169;
int var_5 = -1790369486;
int var_7 = -671999835;
_Bool var_10 = (_Bool)0;
int var_11 = 752828427;
unsigned char var_12 = (unsigned char)105;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)-16306;
unsigned char var_15 = (unsigned char)51;
_Bool var_16 = (_Bool)1;
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
