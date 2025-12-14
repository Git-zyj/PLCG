#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 273534998U;
short var_9 = (short)-22492;
unsigned char var_15 = (unsigned char)107;
signed char var_18 = (signed char)-38;
int zero = 0;
signed char var_19 = (signed char)55;
long long int var_20 = -1240671616637281393LL;
signed char var_21 = (signed char)-42;
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
