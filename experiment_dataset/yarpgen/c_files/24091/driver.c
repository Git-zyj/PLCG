#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3917679018U;
signed char var_4 = (signed char)58;
unsigned long long int var_5 = 7751574331526199523ULL;
unsigned short var_8 = (unsigned short)58615;
int zero = 0;
signed char var_10 = (signed char)-102;
unsigned short var_11 = (unsigned short)14856;
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
