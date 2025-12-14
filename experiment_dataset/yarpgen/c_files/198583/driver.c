#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 983448915128503605LL;
unsigned long long int var_4 = 2430600317067833187ULL;
unsigned short var_7 = (unsigned short)36837;
int zero = 0;
signed char var_10 = (signed char)114;
unsigned char var_11 = (unsigned char)61;
unsigned char var_12 = (unsigned char)67;
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
