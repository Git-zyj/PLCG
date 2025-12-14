#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)9;
short var_1 = (short)32249;
short var_2 = (short)1144;
signed char var_6 = (signed char)-44;
signed char var_8 = (signed char)0;
signed char var_9 = (signed char)12;
short var_11 = (short)-23958;
signed char var_15 = (signed char)-27;
int zero = 0;
short var_16 = (short)1005;
signed char var_17 = (signed char)17;
signed char var_18 = (signed char)87;
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
