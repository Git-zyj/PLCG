#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13778241157237029857ULL;
unsigned short var_4 = (unsigned short)37364;
int var_6 = -1891089634;
signed char var_7 = (signed char)68;
unsigned long long int var_8 = 3946257112407935156ULL;
unsigned short var_11 = (unsigned short)46846;
unsigned long long int var_13 = 2738142776857431780ULL;
signed char var_14 = (signed char)111;
unsigned short var_15 = (unsigned short)44546;
int var_16 = 837640599;
signed char var_17 = (signed char)-85;
int zero = 0;
unsigned int var_20 = 2126709746U;
int var_21 = 899036604;
void init() {
}

void checksum() {
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
