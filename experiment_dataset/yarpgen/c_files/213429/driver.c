#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)2;
signed char var_2 = (signed char)-12;
signed char var_7 = (signed char)107;
int var_8 = -355239385;
int zero = 0;
unsigned char var_15 = (unsigned char)123;
signed char var_16 = (signed char)-97;
signed char var_17 = (signed char)27;
signed char var_18 = (signed char)-26;
unsigned long long int var_19 = 6904735981591561517ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
