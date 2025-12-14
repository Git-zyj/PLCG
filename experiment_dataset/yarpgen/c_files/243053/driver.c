#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)42;
signed char var_2 = (signed char)-102;
signed char var_5 = (signed char)-97;
signed char var_8 = (signed char)35;
signed char var_9 = (signed char)105;
signed char var_10 = (signed char)-85;
signed char var_13 = (signed char)-90;
signed char var_14 = (signed char)35;
int zero = 0;
signed char var_16 = (signed char)0;
signed char var_17 = (signed char)87;
signed char var_18 = (signed char)58;
signed char var_19 = (signed char)89;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
