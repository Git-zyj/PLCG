#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)6;
long long int var_7 = 7721057634540813720LL;
int var_9 = -708011140;
unsigned long long int var_11 = 4268684442598512404ULL;
unsigned short var_14 = (unsigned short)17920;
int var_15 = -1449785549;
unsigned short var_16 = (unsigned short)4922;
int zero = 0;
unsigned long long int var_17 = 7011407576219585286ULL;
short var_18 = (short)8505;
unsigned long long int var_19 = 13012836621768616814ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
