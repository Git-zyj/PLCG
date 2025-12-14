#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25443;
short var_1 = (short)31009;
unsigned int var_2 = 594859423U;
unsigned char var_3 = (unsigned char)220;
unsigned char var_4 = (unsigned char)182;
int zero = 0;
unsigned char var_10 = (unsigned char)105;
unsigned long long int var_11 = 12646101668297189785ULL;
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
