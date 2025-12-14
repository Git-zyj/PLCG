#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20016;
long long int var_2 = 5978363384348804491LL;
signed char var_3 = (signed char)103;
unsigned long long int var_5 = 3632907150081801760ULL;
signed char var_7 = (signed char)-78;
unsigned long long int var_8 = 2397439356159826427ULL;
int zero = 0;
signed char var_10 = (signed char)-46;
short var_11 = (short)5240;
unsigned char var_12 = (unsigned char)129;
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
