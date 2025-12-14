#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3909680375U;
short var_4 = (short)5571;
short var_5 = (short)1677;
signed char var_10 = (signed char)-62;
unsigned int var_12 = 2823557107U;
int zero = 0;
unsigned int var_17 = 1557767941U;
short var_18 = (short)21781;
short var_19 = (short)-9249;
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
