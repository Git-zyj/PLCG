#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)65;
unsigned long long int var_2 = 4287995455043012103ULL;
unsigned long long int var_3 = 15345488154270627127ULL;
unsigned short var_8 = (unsigned short)31190;
short var_11 = (short)-32236;
short var_14 = (short)27093;
int zero = 0;
unsigned int var_18 = 3600563977U;
unsigned char var_19 = (unsigned char)219;
long long int var_20 = 8244019917503573585LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
