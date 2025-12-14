#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)217;
unsigned char var_2 = (unsigned char)102;
signed char var_3 = (signed char)57;
unsigned char var_4 = (unsigned char)124;
unsigned short var_9 = (unsigned short)8973;
unsigned short var_11 = (unsigned short)10949;
unsigned long long int var_13 = 14036297000569271738ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)53299;
unsigned long long int var_19 = 11816836159458762635ULL;
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
