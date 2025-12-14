#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8455631712314531675LL;
unsigned long long int var_4 = 6667295354417134398ULL;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-6;
signed char var_12 = (signed char)40;
signed char var_13 = (signed char)-59;
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
