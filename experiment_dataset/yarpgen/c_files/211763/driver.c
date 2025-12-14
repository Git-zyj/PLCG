#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)243;
signed char var_4 = (signed char)13;
signed char var_7 = (signed char)-58;
unsigned int var_13 = 819281899U;
int zero = 0;
unsigned long long int var_17 = 2246185210835407614ULL;
unsigned int var_18 = 3411234415U;
unsigned int var_19 = 724807658U;
unsigned int var_20 = 671709614U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
