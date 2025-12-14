#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7626;
unsigned short var_1 = (unsigned short)20986;
signed char var_4 = (signed char)-74;
int var_5 = -959105138;
short var_6 = (short)-7505;
long long int var_15 = 4632582135027587177LL;
unsigned long long int var_16 = 1079232981044873935ULL;
int zero = 0;
int var_18 = -2138328525;
unsigned short var_19 = (unsigned short)54168;
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
