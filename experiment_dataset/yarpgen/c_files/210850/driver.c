#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11771;
unsigned long long int var_2 = 15089451546799102582ULL;
signed char var_6 = (signed char)77;
long long int var_8 = 6059997561757684740LL;
long long int var_11 = -4788022586748252402LL;
int var_15 = 25848306;
long long int var_17 = -9079602481765379144LL;
int zero = 0;
unsigned long long int var_18 = 8272878367716762376ULL;
short var_19 = (short)-18506;
int var_20 = 712543296;
unsigned char var_21 = (unsigned char)225;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
