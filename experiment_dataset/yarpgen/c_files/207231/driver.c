#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-53;
_Bool var_10 = (_Bool)0;
unsigned int var_15 = 1755137168U;
int zero = 0;
signed char var_18 = (signed char)78;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)98;
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
