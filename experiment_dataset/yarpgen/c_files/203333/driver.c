#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12158;
unsigned char var_3 = (unsigned char)59;
int var_5 = 850999953;
unsigned int var_6 = 2252789640U;
signed char var_7 = (signed char)2;
signed char var_9 = (signed char)56;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 13405517608397833821ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
