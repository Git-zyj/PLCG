#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)26;
signed char var_2 = (signed char)73;
signed char var_3 = (signed char)16;
long long int var_4 = -205980701471254724LL;
unsigned short var_5 = (unsigned short)32348;
short var_6 = (short)6160;
short var_7 = (short)-8408;
unsigned int var_8 = 505253321U;
unsigned long long int var_9 = 8633197314117987287ULL;
int zero = 0;
unsigned long long int var_10 = 2989199592310950936ULL;
unsigned int var_11 = 3906406278U;
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
