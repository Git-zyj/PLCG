#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-10;
signed char var_5 = (signed char)38;
unsigned char var_12 = (unsigned char)138;
unsigned long long int var_18 = 11068927449095308700ULL;
int zero = 0;
unsigned long long int var_19 = 14190174162861863155ULL;
unsigned int var_20 = 341841916U;
short var_21 = (short)-7841;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
