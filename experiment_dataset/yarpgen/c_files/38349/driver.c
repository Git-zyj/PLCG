#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)11351;
unsigned long long int var_10 = 5710220309439232788ULL;
short var_11 = (short)18529;
unsigned long long int var_12 = 16904300127395125614ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2055197737U;
unsigned long long int var_15 = 10717142540807711221ULL;
unsigned long long int var_16 = 14834062055899944918ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
