#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)168;
signed char var_1 = (signed char)-64;
signed char var_2 = (signed char)-111;
unsigned long long int var_3 = 16376472662479496902ULL;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-82;
_Bool var_6 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)29436;
int var_12 = 343656818;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
