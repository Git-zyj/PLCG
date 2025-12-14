#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6467193251803590996ULL;
short var_3 = (short)32198;
signed char var_4 = (signed char)-8;
unsigned short var_8 = (unsigned short)31233;
int var_11 = 1903596617;
unsigned long long int var_15 = 3197509945294491758ULL;
int zero = 0;
signed char var_18 = (signed char)65;
int var_19 = 1718553911;
void init() {
}

void checksum() {
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
