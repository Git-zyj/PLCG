#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)109;
unsigned long long int var_5 = 7489799180539706578ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)231;
long long int var_19 = 5465369908237573029LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
