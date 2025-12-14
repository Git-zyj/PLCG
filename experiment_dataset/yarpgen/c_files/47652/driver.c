#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 1534116300294217677ULL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)29464;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)51826;
int zero = 0;
unsigned long long int var_20 = 3516446008935167281ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
