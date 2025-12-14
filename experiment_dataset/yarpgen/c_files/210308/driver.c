#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)85;
_Bool var_11 = (_Bool)0;
int var_13 = -1418348742;
unsigned char var_14 = (unsigned char)84;
int zero = 0;
long long int var_16 = 8234611001974518798LL;
unsigned char var_17 = (unsigned char)189;
unsigned int var_18 = 3926391774U;
unsigned int var_19 = 2096795276U;
signed char var_20 = (signed char)-116;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
