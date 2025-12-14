#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5180218507903111590ULL;
int var_4 = -39265202;
short var_5 = (short)-27324;
long long int var_9 = 4999217574009619951LL;
unsigned char var_12 = (unsigned char)95;
signed char var_16 = (signed char)43;
unsigned char var_18 = (unsigned char)79;
int zero = 0;
signed char var_19 = (signed char)-67;
unsigned char var_20 = (unsigned char)147;
short var_21 = (short)779;
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
