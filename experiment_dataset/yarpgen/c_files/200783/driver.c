#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1914209503U;
long long int var_3 = 5655858859853580222LL;
unsigned short var_5 = (unsigned short)41949;
unsigned int var_9 = 2566554155U;
unsigned long long int var_15 = 12187811782003453014ULL;
unsigned long long int var_18 = 598739987744525214ULL;
int zero = 0;
unsigned int var_19 = 880790933U;
long long int var_20 = 8995667283228149394LL;
unsigned int var_21 = 3815364169U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
