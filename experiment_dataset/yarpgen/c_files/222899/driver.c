#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28586;
unsigned long long int var_2 = 5082728068491142128ULL;
unsigned char var_9 = (unsigned char)58;
signed char var_12 = (signed char)-123;
int zero = 0;
int var_16 = -1388833760;
unsigned long long int var_17 = 12177077952768358566ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
