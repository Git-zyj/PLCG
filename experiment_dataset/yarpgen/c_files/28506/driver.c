#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12662952993243101569ULL;
long long int var_3 = -6988730614433942532LL;
int var_6 = -1574765496;
unsigned short var_9 = (unsigned short)35285;
unsigned long long int var_11 = 3120509051076016598ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)60010;
unsigned short var_16 = (unsigned short)4483;
int var_17 = -964827586;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
