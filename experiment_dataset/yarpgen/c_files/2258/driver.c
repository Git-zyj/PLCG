#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)20;
short var_3 = (short)11861;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 4189011667U;
int var_9 = 796426031;
int var_11 = 169045166;
unsigned char var_13 = (unsigned char)14;
unsigned char var_14 = (unsigned char)195;
unsigned int var_17 = 3651907100U;
int zero = 0;
long long int var_19 = 5921834363395343576LL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 4294436866U;
unsigned char var_22 = (unsigned char)159;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
