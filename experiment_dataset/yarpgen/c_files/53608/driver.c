#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3087830382156146438LL;
int var_3 = 16882012;
unsigned short var_4 = (unsigned short)50686;
unsigned short var_5 = (unsigned short)50953;
long long int var_8 = -8662412091366569692LL;
int var_9 = -205951151;
int zero = 0;
long long int var_10 = -2581718390407802722LL;
unsigned short var_11 = (unsigned short)23626;
unsigned long long int var_12 = 11755484096728318237ULL;
long long int var_13 = 8543335139314417634LL;
long long int var_14 = 9066446800542865617LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
