#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -120205324;
signed char var_10 = (signed char)-46;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 5932279476583008271ULL;
unsigned char var_15 = (unsigned char)196;
unsigned char var_17 = (unsigned char)18;
int zero = 0;
unsigned int var_19 = 3023838949U;
unsigned int var_20 = 3301001975U;
void init() {
}

void checksum() {
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
