#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)35;
unsigned char var_3 = (unsigned char)44;
unsigned int var_4 = 284750407U;
long long int var_7 = -4901107742115959015LL;
unsigned char var_8 = (unsigned char)137;
signed char var_9 = (signed char)70;
unsigned char var_11 = (unsigned char)179;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1893048325U;
int var_14 = -426150930;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
