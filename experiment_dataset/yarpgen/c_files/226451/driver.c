#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22292;
signed char var_1 = (signed char)-83;
unsigned int var_4 = 3128960501U;
unsigned short var_5 = (unsigned short)58234;
int zero = 0;
signed char var_10 = (signed char)-40;
unsigned long long int var_11 = 1387500092056714859ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
