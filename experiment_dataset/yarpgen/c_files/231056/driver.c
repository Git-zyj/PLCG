#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5621227713015169900LL;
unsigned long long int var_4 = 2752407908092812442ULL;
long long int var_7 = 1903425148976943726LL;
short var_8 = (short)25381;
long long int var_11 = -1254884856185085848LL;
int zero = 0;
unsigned long long int var_12 = 5901481383605057708ULL;
unsigned int var_13 = 1905042563U;
signed char var_14 = (signed char)-24;
long long int var_15 = -5229138969041264038LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
