#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18124934006624767055ULL;
signed char var_7 = (signed char)94;
unsigned short var_8 = (unsigned short)19823;
int zero = 0;
signed char var_15 = (signed char)52;
int var_16 = -1888495438;
signed char var_17 = (signed char)-58;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
