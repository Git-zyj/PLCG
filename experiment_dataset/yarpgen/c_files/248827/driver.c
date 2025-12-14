#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 591840362;
unsigned long long int var_1 = 9343638029137453014ULL;
int var_2 = -792638519;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)88;
unsigned long long int var_9 = 6357513932527551212ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-30;
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
