#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2425777801482180994ULL;
unsigned long long int var_4 = 14261289168048797803ULL;
unsigned int var_9 = 1297713220U;
unsigned long long int var_10 = 15161188587513902179ULL;
unsigned int var_11 = 2928089531U;
_Bool var_19 = (_Bool)0;
int zero = 0;
long long int var_20 = -2498904851940544805LL;
_Bool var_21 = (_Bool)0;
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
