#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-77;
long long int var_8 = 1934839306218970878LL;
int zero = 0;
unsigned int var_10 = 3067101616U;
unsigned char var_11 = (unsigned char)171;
unsigned long long int var_12 = 6594777315432658477ULL;
short var_13 = (short)29123;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
