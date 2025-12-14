#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15900346824998315795ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_17 = 14416491483129785967ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)41078;
unsigned long long int var_19 = 5885623331553377386ULL;
unsigned long long int var_20 = 5619687397866783848ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
