#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)64;
signed char var_13 = (signed char)77;
signed char var_16 = (signed char)-77;
int zero = 0;
signed char var_19 = (signed char)110;
unsigned char var_20 = (unsigned char)206;
signed char var_21 = (signed char)11;
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
