#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5251916209710976600LL;
short var_6 = (short)-25792;
unsigned long long int var_8 = 7037138904251164431ULL;
unsigned long long int var_10 = 8261724001997457796ULL;
unsigned short var_11 = (unsigned short)40072;
int zero = 0;
signed char var_12 = (signed char)84;
short var_13 = (short)19757;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
