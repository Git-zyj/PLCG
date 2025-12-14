#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4229;
signed char var_6 = (signed char)-56;
unsigned char var_8 = (unsigned char)40;
int zero = 0;
long long int var_19 = 6111110104511943283LL;
int var_20 = 1489796665;
unsigned char var_21 = (unsigned char)45;
unsigned long long int var_22 = 4179808363508689633ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
