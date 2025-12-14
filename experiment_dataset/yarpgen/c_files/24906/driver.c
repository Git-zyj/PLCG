#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4098603300U;
unsigned char var_2 = (unsigned char)79;
short var_4 = (short)11991;
unsigned int var_6 = 1332001889U;
unsigned long long int var_7 = 16663438180133471643ULL;
unsigned long long int var_8 = 7798261734344808926ULL;
unsigned long long int var_9 = 18341835726521508906ULL;
short var_10 = (short)21461;
unsigned long long int var_11 = 8738048830918945148ULL;
unsigned char var_12 = (unsigned char)125;
int zero = 0;
unsigned long long int var_14 = 12408432759406277596ULL;
int var_15 = -556008724;
unsigned int var_16 = 3926056054U;
unsigned int var_17 = 3062107587U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
