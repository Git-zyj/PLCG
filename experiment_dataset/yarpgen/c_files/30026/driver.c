#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-76;
signed char var_4 = (signed char)-47;
signed char var_5 = (signed char)15;
signed char var_8 = (signed char)-25;
signed char var_10 = (signed char)35;
signed char var_11 = (signed char)-52;
signed char var_12 = (signed char)-80;
signed char var_13 = (signed char)7;
int zero = 0;
signed char var_16 = (signed char)59;
signed char var_17 = (signed char)44;
signed char var_18 = (signed char)94;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
