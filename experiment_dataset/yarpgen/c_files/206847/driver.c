#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21079;
unsigned long long int var_2 = 4032861306048149665ULL;
signed char var_3 = (signed char)-62;
unsigned char var_4 = (unsigned char)53;
unsigned char var_6 = (unsigned char)61;
short var_7 = (short)4639;
unsigned int var_9 = 127916179U;
int zero = 0;
signed char var_12 = (signed char)-124;
unsigned char var_13 = (unsigned char)187;
signed char var_14 = (signed char)114;
void init() {
}

void checksum() {
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
