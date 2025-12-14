#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1177270283130737950ULL;
unsigned int var_2 = 3569290783U;
unsigned short var_4 = (unsigned short)21111;
long long int var_5 = -8468400501075602426LL;
unsigned char var_6 = (unsigned char)194;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 4545525671732191750ULL;
long long int var_9 = -2649596995498911117LL;
unsigned short var_10 = (unsigned short)9150;
int zero = 0;
unsigned int var_11 = 4033889625U;
long long int var_12 = -4930839213743232635LL;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)68;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
