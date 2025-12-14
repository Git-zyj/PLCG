#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1731762821;
unsigned char var_12 = (unsigned char)41;
signed char var_13 = (signed char)-47;
signed char var_19 = (signed char)-52;
int zero = 0;
short var_20 = (short)9026;
int var_21 = 574571398;
short var_22 = (short)-1947;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
