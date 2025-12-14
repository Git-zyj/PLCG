#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40432;
unsigned int var_1 = 154741655U;
signed char var_2 = (signed char)-105;
int var_4 = 2126053751;
signed char var_7 = (signed char)51;
int var_8 = -643930728;
signed char var_9 = (signed char)104;
int zero = 0;
unsigned int var_10 = 616006510U;
unsigned short var_11 = (unsigned short)62200;
unsigned int var_12 = 3448844687U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
