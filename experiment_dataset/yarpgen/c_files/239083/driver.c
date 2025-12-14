#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5660183631237237206LL;
unsigned long long int var_3 = 15382997668772798745ULL;
unsigned char var_4 = (unsigned char)178;
unsigned short var_7 = (unsigned short)25984;
unsigned char var_14 = (unsigned char)212;
signed char var_18 = (signed char)-64;
int zero = 0;
unsigned long long int var_20 = 8858194360420907561ULL;
signed char var_21 = (signed char)-32;
long long int var_22 = -1107033711400811748LL;
unsigned short var_23 = (unsigned short)31754;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
