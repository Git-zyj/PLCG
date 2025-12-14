#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-30358;
unsigned short var_6 = (unsigned short)56911;
signed char var_9 = (signed char)-25;
short var_10 = (short)27784;
int zero = 0;
unsigned long long int var_18 = 9849545195156645158ULL;
unsigned int var_19 = 3558948009U;
unsigned long long int var_20 = 16777070786523187864ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
