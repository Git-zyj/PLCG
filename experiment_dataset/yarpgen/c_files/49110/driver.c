#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -889171131;
unsigned int var_8 = 545714784U;
_Bool var_9 = (_Bool)1;
unsigned int var_14 = 3085577635U;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = 1161761234;
int var_19 = 648390704;
unsigned long long int var_20 = 16397822637129304318ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
