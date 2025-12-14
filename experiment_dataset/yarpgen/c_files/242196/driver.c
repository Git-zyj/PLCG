#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -106502120;
int var_6 = 372427983;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 80591335U;
unsigned char var_14 = (unsigned char)241;
long long int var_16 = 6428757070971343521LL;
int zero = 0;
unsigned long long int var_17 = 10027876612514053856ULL;
signed char var_18 = (signed char)-106;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
