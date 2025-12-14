#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15756583420450590453ULL;
unsigned char var_5 = (unsigned char)249;
unsigned long long int var_6 = 15912144310980944300ULL;
unsigned char var_7 = (unsigned char)64;
unsigned long long int var_10 = 12805525675648342579ULL;
int zero = 0;
unsigned long long int var_12 = 15466204778677307931ULL;
unsigned short var_13 = (unsigned short)15137;
int var_14 = -544569134;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
