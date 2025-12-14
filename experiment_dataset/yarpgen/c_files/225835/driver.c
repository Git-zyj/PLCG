#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12922275433615173088ULL;
signed char var_4 = (signed char)-28;
int var_9 = 1059921703;
int zero = 0;
unsigned char var_17 = (unsigned char)171;
short var_18 = (short)14467;
unsigned char var_19 = (unsigned char)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
