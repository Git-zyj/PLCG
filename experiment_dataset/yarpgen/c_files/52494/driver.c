#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-80;
unsigned char var_4 = (unsigned char)157;
signed char var_8 = (signed char)0;
unsigned long long int var_11 = 15880983825798232120ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)222;
short var_15 = (short)25363;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
