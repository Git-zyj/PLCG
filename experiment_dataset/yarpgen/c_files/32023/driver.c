#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 501257907U;
long long int var_3 = -3007321366466888065LL;
int var_6 = 972065692;
_Bool var_12 = (_Bool)1;
unsigned long long int var_16 = 13425328975867478238ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_18 = 937319875190335184LL;
long long int var_19 = -2710572200080164152LL;
unsigned long long int var_20 = 9120977823987776317ULL;
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
