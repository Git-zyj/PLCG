#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10739021443658203961ULL;
int var_6 = -129582414;
unsigned short var_7 = (unsigned short)34717;
long long int var_15 = 6357253311226798509LL;
int zero = 0;
int var_16 = 533701430;
short var_17 = (short)-26173;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
