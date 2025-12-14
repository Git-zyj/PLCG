#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned int var_7 = 3709431870U;
unsigned int var_9 = 2911014523U;
int var_11 = 1594439503;
unsigned int var_16 = 800261590U;
int zero = 0;
signed char var_17 = (signed char)28;
signed char var_18 = (signed char)11;
long long int var_19 = -8878279478248324077LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
