#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9346889024589154994ULL;
unsigned short var_1 = (unsigned short)9747;
unsigned long long int var_2 = 259889967656548675ULL;
unsigned int var_5 = 2650939624U;
int var_8 = 244457685;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 3700403630566214716ULL;
int var_12 = 1953995788;
unsigned long long int var_13 = 13486566537368611987ULL;
unsigned long long int var_14 = 12177644231660864096ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)24041;
unsigned char var_16 = (unsigned char)167;
unsigned int var_17 = 2766243484U;
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
