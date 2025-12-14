#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-100;
unsigned char var_3 = (unsigned char)160;
signed char var_9 = (signed char)-53;
short var_12 = (short)473;
int zero = 0;
unsigned long long int var_13 = 3831608365461122498ULL;
unsigned long long int var_14 = 11626968031531749308ULL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
