#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-18;
long long int var_6 = 4767800801316218047LL;
signed char var_11 = (signed char)11;
unsigned short var_18 = (unsigned short)61105;
int zero = 0;
unsigned int var_20 = 214308878U;
int var_21 = 290896944;
void init() {
}

void checksum() {
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
