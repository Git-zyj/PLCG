#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -209100032;
unsigned long long int var_3 = 17828655007270519373ULL;
unsigned short var_4 = (unsigned short)57114;
unsigned short var_5 = (unsigned short)56802;
unsigned short var_7 = (unsigned short)13210;
unsigned char var_10 = (unsigned char)123;
unsigned short var_15 = (unsigned short)60001;
int zero = 0;
signed char var_17 = (signed char)-105;
unsigned long long int var_18 = 3100900792165901808ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
