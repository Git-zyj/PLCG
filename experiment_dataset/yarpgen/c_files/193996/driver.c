#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)94;
unsigned long long int var_5 = 13301677246520352609ULL;
signed char var_10 = (signed char)-24;
signed char var_13 = (signed char)-97;
signed char var_14 = (signed char)-104;
int zero = 0;
signed char var_16 = (signed char)65;
unsigned char var_17 = (unsigned char)168;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
