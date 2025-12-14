#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-9;
unsigned long long int var_4 = 7708381674571796502ULL;
unsigned int var_6 = 2111969927U;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)109;
int zero = 0;
unsigned long long int var_14 = 14830465241810515601ULL;
unsigned char var_15 = (unsigned char)64;
unsigned short var_16 = (unsigned short)24524;
long long int var_17 = -7493819594881145660LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
