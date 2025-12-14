#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4727;
unsigned int var_2 = 48991403U;
signed char var_4 = (signed char)-94;
short var_6 = (short)27973;
unsigned long long int var_7 = 13986529062535648429ULL;
unsigned short var_10 = (unsigned short)4448;
short var_11 = (short)28882;
unsigned int var_12 = 1407107797U;
long long int var_15 = 2193623789246335513LL;
int zero = 0;
long long int var_17 = -8033391280130358909LL;
unsigned int var_18 = 2409990001U;
short var_19 = (short)8514;
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
