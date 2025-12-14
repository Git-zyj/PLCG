#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-30446;
unsigned char var_7 = (unsigned char)31;
unsigned short var_8 = (unsigned short)12483;
unsigned short var_10 = (unsigned short)39944;
short var_12 = (short)-26395;
unsigned int var_13 = 2935971811U;
int zero = 0;
signed char var_20 = (signed char)-126;
short var_21 = (short)26787;
unsigned long long int var_22 = 332990452122122620ULL;
short var_23 = (short)7509;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
