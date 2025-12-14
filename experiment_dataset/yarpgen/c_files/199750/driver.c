#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_12 = (signed char)78;
signed char var_13 = (signed char)-126;
unsigned long long int var_14 = 10477155037820354315ULL;
int zero = 0;
unsigned long long int var_15 = 16381089176628711607ULL;
signed char var_16 = (signed char)-76;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
