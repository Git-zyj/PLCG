#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60590;
unsigned char var_4 = (unsigned char)161;
long long int var_5 = 3406770320853301015LL;
unsigned short var_10 = (unsigned short)63200;
int zero = 0;
signed char var_11 = (signed char)4;
unsigned long long int var_12 = 2663111039576265810ULL;
long long int var_13 = -2340585984402350772LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
