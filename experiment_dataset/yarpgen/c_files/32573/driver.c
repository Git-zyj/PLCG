#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 8110611208979349263ULL;
int var_8 = 873926586;
int zero = 0;
unsigned char var_10 = (unsigned char)67;
unsigned long long int var_11 = 3941225576329711611ULL;
unsigned short var_12 = (unsigned short)934;
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
