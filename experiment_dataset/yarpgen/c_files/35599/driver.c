#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)41;
int var_1 = -254664807;
int var_3 = -436912825;
long long int var_4 = -3323999600287033448LL;
unsigned char var_6 = (unsigned char)222;
signed char var_7 = (signed char)92;
long long int var_8 = 7265338260269332290LL;
signed char var_9 = (signed char)-31;
unsigned long long int var_10 = 6903680654993306301ULL;
unsigned char var_11 = (unsigned char)26;
long long int var_13 = 3085947961576880414LL;
int zero = 0;
unsigned int var_14 = 4068608301U;
signed char var_15 = (signed char)-22;
unsigned short var_16 = (unsigned short)32055;
long long int var_17 = 2313415058216713753LL;
unsigned char var_18 = (unsigned char)95;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
