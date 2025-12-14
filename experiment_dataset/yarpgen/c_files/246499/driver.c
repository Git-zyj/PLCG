#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18254526409806780533ULL;
signed char var_4 = (signed char)-94;
unsigned short var_7 = (unsigned short)47164;
unsigned int var_10 = 158196686U;
signed char var_11 = (signed char)-30;
int var_12 = -1263141506;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_18 = (short)19902;
unsigned int var_19 = 3045551133U;
int var_20 = -1274988424;
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
