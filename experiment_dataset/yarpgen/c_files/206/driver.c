#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 89104105065445035ULL;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 5789219355175285293ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 16091053293332964047ULL;
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
