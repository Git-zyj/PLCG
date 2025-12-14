#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5171836509302715745ULL;
int var_1 = -554654532;
int var_3 = 1344511541;
short var_6 = (short)18078;
unsigned int var_7 = 3743541532U;
long long int var_10 = 4841318681109106952LL;
signed char var_11 = (signed char)-11;
short var_12 = (short)-2770;
unsigned char var_13 = (unsigned char)34;
unsigned int var_15 = 792612489U;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int var_18 = -1240554850;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
