#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 983829605;
signed char var_15 = (signed char)-5;
unsigned long long int var_17 = 13510743057646633949ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 18397138896430098978ULL;
unsigned long long int var_20 = 17244413183909907482ULL;
signed char var_21 = (signed char)-5;
short var_22 = (short)-167;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
