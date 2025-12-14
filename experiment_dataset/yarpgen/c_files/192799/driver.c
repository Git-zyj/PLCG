#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-103;
signed char var_7 = (signed char)15;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 484791528U;
signed char var_13 = (signed char)-85;
int zero = 0;
signed char var_18 = (signed char)3;
unsigned char var_19 = (unsigned char)227;
unsigned int var_20 = 1715840409U;
unsigned char var_21 = (unsigned char)230;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
