#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)47147;
_Bool var_5 = (_Bool)1;
unsigned int var_14 = 2737161668U;
int zero = 0;
int var_17 = 102079198;
unsigned char var_18 = (unsigned char)142;
unsigned int var_19 = 2616239509U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
