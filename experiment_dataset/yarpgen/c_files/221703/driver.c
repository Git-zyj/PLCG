#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2071994651061320930LL;
unsigned long long int var_2 = 14485785111803784767ULL;
unsigned char var_3 = (unsigned char)127;
unsigned long long int var_9 = 2960031962187374823ULL;
unsigned long long int var_10 = 11422882817357494277ULL;
unsigned short var_11 = (unsigned short)25679;
short var_18 = (short)-634;
int zero = 0;
unsigned short var_19 = (unsigned short)9281;
unsigned short var_20 = (unsigned short)56621;
unsigned long long int var_21 = 5820399268979282184ULL;
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
