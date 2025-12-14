#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18721;
short var_2 = (short)22340;
short var_5 = (short)-7676;
int var_8 = -782594937;
long long int var_9 = -1458880425570906182LL;
long long int var_10 = -8782713107345139180LL;
int var_11 = -187591664;
int var_12 = 424981840;
int zero = 0;
unsigned char var_13 = (unsigned char)246;
signed char var_14 = (signed char)32;
unsigned char var_15 = (unsigned char)144;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
