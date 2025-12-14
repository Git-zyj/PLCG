#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2269086768386987313ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_15 = 3160062984753337542ULL;
unsigned char var_18 = (unsigned char)227;
int zero = 0;
signed char var_19 = (signed char)98;
int var_20 = -887245960;
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
