#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-30836;
signed char var_10 = (signed char)-11;
signed char var_12 = (signed char)-77;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)19;
signed char var_19 = (signed char)98;
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
