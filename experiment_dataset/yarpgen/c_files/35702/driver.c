#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-92;
signed char var_3 = (signed char)15;
unsigned long long int var_6 = 4946106787921657102ULL;
signed char var_7 = (signed char)123;
unsigned long long int var_18 = 10475225489987546090ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)49;
unsigned long long int var_20 = 14927967808435830113ULL;
signed char var_21 = (signed char)-61;
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
