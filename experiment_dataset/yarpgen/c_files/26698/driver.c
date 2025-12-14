#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)35;
unsigned char var_10 = (unsigned char)206;
int zero = 0;
int var_12 = 231463257;
unsigned long long int var_13 = 115277770391572146ULL;
unsigned long long int var_14 = 13963524762234453313ULL;
unsigned long long int var_15 = 4778598920626826804ULL;
unsigned long long int var_16 = 1742786719583891996ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
