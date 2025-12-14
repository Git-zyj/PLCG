#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)61178;
unsigned int var_10 = 2929815020U;
unsigned int var_12 = 2266979514U;
unsigned char var_15 = (unsigned char)193;
unsigned long long int var_16 = 8374681472163426682ULL;
int zero = 0;
unsigned long long int var_17 = 14908562224133938532ULL;
unsigned char var_18 = (unsigned char)170;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
