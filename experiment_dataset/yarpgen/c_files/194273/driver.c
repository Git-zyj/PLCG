#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18225771902603447835ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_14 = 740239767242609937ULL;
int zero = 0;
signed char var_17 = (signed char)-59;
signed char var_18 = (signed char)-78;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 6417661242776530532ULL;
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
