#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 409258952U;
signed char var_2 = (signed char)-32;
unsigned long long int var_3 = 14231047631147243726ULL;
unsigned short var_7 = (unsigned short)39416;
signed char var_9 = (signed char)-17;
int zero = 0;
short var_11 = (short)-10877;
unsigned char var_12 = (unsigned char)184;
void init() {
}

void checksum() {
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
