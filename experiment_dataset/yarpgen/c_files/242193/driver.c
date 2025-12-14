#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1865719425;
unsigned char var_2 = (unsigned char)55;
long long int var_3 = 7398460123196807773LL;
signed char var_5 = (signed char)52;
_Bool var_6 = (_Bool)1;
signed char var_11 = (signed char)-106;
int zero = 0;
unsigned int var_13 = 1362463159U;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 12412445693335567164ULL;
unsigned char var_16 = (unsigned char)101;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
