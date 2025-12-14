#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45534;
unsigned short var_2 = (unsigned short)15271;
long long int var_4 = 5954835422688747395LL;
unsigned long long int var_10 = 14292200259278726154ULL;
unsigned char var_13 = (unsigned char)134;
unsigned char var_15 = (unsigned char)192;
int zero = 0;
unsigned short var_18 = (unsigned short)46168;
short var_19 = (short)-25210;
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
