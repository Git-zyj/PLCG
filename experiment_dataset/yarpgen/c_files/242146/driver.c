#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 5716844005902417185ULL;
unsigned short var_10 = (unsigned short)60689;
signed char var_11 = (signed char)104;
short var_12 = (short)-25227;
int var_14 = -951700751;
signed char var_15 = (signed char)-12;
int zero = 0;
unsigned long long int var_19 = 5904753441822892651ULL;
signed char var_20 = (signed char)-126;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
