#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5960447894309359289LL;
int zero = 0;
unsigned long long int var_20 = 10122567238903432131ULL;
signed char var_21 = (signed char)-43;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)65187;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
