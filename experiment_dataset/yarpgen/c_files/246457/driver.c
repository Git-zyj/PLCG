#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2918765494U;
unsigned char var_7 = (unsigned char)12;
signed char var_9 = (signed char)89;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 12741259143005185536ULL;
void init() {
}

void checksum() {
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
