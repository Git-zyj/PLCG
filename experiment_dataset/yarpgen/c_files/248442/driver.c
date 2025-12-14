#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30244;
int var_7 = -645470950;
unsigned char var_10 = (unsigned char)50;
unsigned char var_18 = (unsigned char)216;
signed char var_19 = (signed char)-1;
int zero = 0;
int var_20 = -100445007;
unsigned int var_21 = 352583155U;
unsigned long long int var_22 = 13468556839128479779ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
