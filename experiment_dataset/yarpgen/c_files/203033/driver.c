#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58758;
int var_5 = 1123177250;
_Bool var_6 = (_Bool)1;
long long int var_8 = -6065228121581363567LL;
int zero = 0;
unsigned short var_18 = (unsigned short)7206;
signed char var_19 = (signed char)-26;
void init() {
}

void checksum() {
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
