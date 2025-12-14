#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2511548177974268818LL;
signed char var_4 = (signed char)-11;
unsigned long long int var_5 = 13384325289924237159ULL;
unsigned char var_7 = (unsigned char)118;
signed char var_8 = (signed char)-32;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 1897929876446757277ULL;
int zero = 0;
long long int var_12 = -1137742418600387135LL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)11621;
signed char var_15 = (signed char)124;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
