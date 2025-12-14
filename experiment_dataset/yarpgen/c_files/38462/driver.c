#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3821936942U;
unsigned long long int var_3 = 16255712712461594713ULL;
unsigned char var_4 = (unsigned char)98;
unsigned long long int var_6 = 2444654647358054727ULL;
unsigned char var_9 = (unsigned char)19;
unsigned char var_10 = (unsigned char)27;
int zero = 0;
unsigned long long int var_11 = 2452262157642060010ULL;
short var_12 = (short)-30234;
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
