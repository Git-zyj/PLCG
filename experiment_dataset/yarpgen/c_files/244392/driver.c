#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)23;
unsigned short var_8 = (unsigned short)12317;
signed char var_15 = (signed char)46;
signed char var_18 = (signed char)90;
signed char var_19 = (signed char)-16;
int zero = 0;
unsigned long long int var_20 = 6757273531203001355ULL;
signed char var_21 = (signed char)-47;
unsigned short var_22 = (unsigned short)64585;
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
