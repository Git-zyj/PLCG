#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23897;
short var_4 = (short)11155;
long long int var_6 = 7287949210160952618LL;
signed char var_7 = (signed char)-89;
int zero = 0;
long long int var_13 = 1247177806637643299LL;
long long int var_14 = 4853994518012036548LL;
unsigned int var_15 = 2756348438U;
long long int var_16 = -8004625161623849317LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
