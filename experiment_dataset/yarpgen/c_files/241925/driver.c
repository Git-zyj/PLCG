#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-32391;
signed char var_8 = (signed char)6;
short var_9 = (short)-31058;
short var_15 = (short)-31090;
int zero = 0;
signed char var_20 = (signed char)-47;
short var_21 = (short)19782;
signed char var_22 = (signed char)-31;
unsigned int var_23 = 1043184959U;
short var_24 = (short)4885;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
