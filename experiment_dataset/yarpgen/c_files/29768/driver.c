#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1212730341343424062ULL;
signed char var_4 = (signed char)29;
int var_5 = 468162409;
unsigned long long int var_6 = 8596797209063681890ULL;
unsigned long long int var_17 = 17858247227266238332ULL;
int zero = 0;
long long int var_20 = -1005081492897795867LL;
short var_21 = (short)14064;
signed char var_22 = (signed char)-78;
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
