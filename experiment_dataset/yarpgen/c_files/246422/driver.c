#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9247;
unsigned int var_2 = 4000439718U;
unsigned int var_8 = 3986334705U;
signed char var_9 = (signed char)66;
unsigned int var_10 = 4169727484U;
int zero = 0;
unsigned short var_11 = (unsigned short)62272;
unsigned long long int var_12 = 3326972911191832157ULL;
signed char var_13 = (signed char)-105;
unsigned char var_14 = (unsigned char)179;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
