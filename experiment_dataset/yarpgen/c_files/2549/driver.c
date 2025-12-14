#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15115574613853342373ULL;
unsigned short var_4 = (unsigned short)37133;
signed char var_5 = (signed char)-28;
signed char var_6 = (signed char)80;
unsigned char var_8 = (unsigned char)91;
int zero = 0;
signed char var_11 = (signed char)-48;
signed char var_12 = (signed char)-19;
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
