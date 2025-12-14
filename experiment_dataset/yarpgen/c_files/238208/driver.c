#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15155529186077533973ULL;
int var_2 = 1094312383;
int var_7 = 382997629;
short var_9 = (short)5137;
_Bool var_10 = (_Bool)0;
unsigned short var_13 = (unsigned short)39044;
unsigned long long int var_17 = 9103609825252910369ULL;
int zero = 0;
signed char var_18 = (signed char)127;
int var_19 = 1149401489;
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
