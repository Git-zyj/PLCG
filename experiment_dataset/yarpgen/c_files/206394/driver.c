#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1764899702;
_Bool var_7 = (_Bool)0;
int var_8 = -1385442719;
unsigned int var_12 = 3422429652U;
signed char var_13 = (signed char)43;
int zero = 0;
unsigned char var_14 = (unsigned char)161;
short var_15 = (short)11450;
long long int var_16 = 4269485696079746879LL;
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
