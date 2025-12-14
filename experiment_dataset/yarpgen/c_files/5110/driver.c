#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)20;
signed char var_6 = (signed char)-23;
unsigned int var_7 = 3040508835U;
_Bool var_9 = (_Bool)1;
int var_10 = 601214162;
int zero = 0;
unsigned long long int var_11 = 8478890018108121814ULL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
