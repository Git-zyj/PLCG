#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16500810134073444884ULL;
unsigned long long int var_2 = 11229541346307312023ULL;
unsigned long long int var_3 = 9557245261857454906ULL;
signed char var_5 = (signed char)-6;
long long int var_8 = -9005914969637609726LL;
unsigned long long int var_9 = 11939581325578453807ULL;
signed char var_10 = (signed char)58;
int zero = 0;
signed char var_11 = (signed char)11;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 16155687061143750441ULL;
int var_14 = -1313789165;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
