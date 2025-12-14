#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17908043703180212475ULL;
unsigned char var_5 = (unsigned char)153;
unsigned char var_7 = (unsigned char)213;
unsigned char var_19 = (unsigned char)172;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3204908105U;
_Bool var_22 = (_Bool)1;
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
