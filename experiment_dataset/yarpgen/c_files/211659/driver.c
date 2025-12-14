#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2574291278728822956LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 9673263156564526008ULL;
unsigned short var_9 = (unsigned short)26951;
int zero = 0;
signed char var_10 = (signed char)-33;
unsigned short var_11 = (unsigned short)64007;
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
