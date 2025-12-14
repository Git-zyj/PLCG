#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)121;
signed char var_3 = (signed char)-71;
signed char var_5 = (signed char)-39;
signed char var_6 = (signed char)117;
signed char var_11 = (signed char)-15;
int zero = 0;
signed char var_15 = (signed char)-44;
signed char var_16 = (signed char)-57;
signed char var_17 = (signed char)-96;
signed char var_18 = (signed char)34;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
