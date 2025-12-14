#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 780687745604973953LL;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)137;
unsigned int var_6 = 1899486124U;
unsigned long long int var_8 = 11571059495493676600ULL;
unsigned long long int var_10 = 15238811930195944714ULL;
unsigned long long int var_11 = 10292503930252889006ULL;
int zero = 0;
unsigned int var_12 = 324823100U;
signed char var_13 = (signed char)100;
int var_14 = 1500074464;
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
