#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3904;
unsigned long long int var_5 = 15723207099596183046ULL;
signed char var_7 = (signed char)-41;
long long int var_8 = 224901335548099714LL;
unsigned long long int var_10 = 13910356442882787245ULL;
signed char var_11 = (signed char)40;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 7987193604045216838ULL;
void init() {
}

void checksum() {
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
