#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)219;
short var_2 = (short)-27776;
unsigned long long int var_5 = 14014916097808538895ULL;
signed char var_7 = (signed char)-126;
unsigned int var_9 = 4130210289U;
unsigned long long int var_10 = 10772552539216607283ULL;
signed char var_11 = (signed char)-64;
_Bool var_15 = (_Bool)0;
int var_16 = -2075805896;
int zero = 0;
long long int var_18 = 4244409349006052681LL;
unsigned short var_19 = (unsigned short)25265;
int var_20 = 1034146112;
unsigned short var_21 = (unsigned short)52049;
unsigned long long int var_22 = 5791534585663870828ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
