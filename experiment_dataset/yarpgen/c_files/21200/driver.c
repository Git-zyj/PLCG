#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 6115991113659475552ULL;
int var_7 = -517151438;
int var_10 = -302726701;
unsigned int var_11 = 1950693982U;
unsigned int var_15 = 2775072381U;
unsigned int var_16 = 609283720U;
int zero = 0;
int var_17 = 1252907715;
unsigned short var_18 = (unsigned short)22315;
_Bool var_19 = (_Bool)1;
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
