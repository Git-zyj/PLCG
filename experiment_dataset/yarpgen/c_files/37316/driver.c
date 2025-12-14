#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-93;
signed char var_2 = (signed char)-32;
unsigned char var_3 = (unsigned char)15;
unsigned short var_5 = (unsigned short)7967;
int var_7 = -1179165747;
long long int var_9 = -5956631714376811017LL;
unsigned char var_11 = (unsigned char)174;
short var_13 = (short)-12149;
int zero = 0;
unsigned long long int var_15 = 16200456990198816773ULL;
int var_16 = 934199707;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
