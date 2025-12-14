#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4074697013U;
_Bool var_4 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 7515279599913117508ULL;
unsigned int var_12 = 2598399316U;
int var_15 = -1014926899;
int zero = 0;
signed char var_18 = (signed char)-74;
unsigned char var_19 = (unsigned char)71;
unsigned int var_20 = 2591775386U;
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
