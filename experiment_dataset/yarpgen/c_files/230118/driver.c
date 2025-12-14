#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)110;
long long int var_5 = 4584923629419962902LL;
int var_7 = -753090293;
unsigned char var_8 = (unsigned char)119;
int zero = 0;
unsigned long long int var_12 = 13325749079255429759ULL;
short var_13 = (short)-29822;
unsigned int var_14 = 520822120U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
