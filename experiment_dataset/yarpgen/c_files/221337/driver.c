#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 412316104U;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 18132067404801669770ULL;
unsigned short var_7 = (unsigned short)17405;
int zero = 0;
unsigned char var_11 = (unsigned char)251;
unsigned char var_12 = (unsigned char)94;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
