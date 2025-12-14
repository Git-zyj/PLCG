#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13058432358604921379ULL;
_Bool var_1 = (_Bool)1;
long long int var_2 = -8866675474067297520LL;
signed char var_4 = (signed char)-76;
unsigned char var_5 = (unsigned char)46;
unsigned long long int var_6 = 2177222313059378532ULL;
unsigned char var_7 = (unsigned char)58;
unsigned long long int var_9 = 2971111960445791391ULL;
int zero = 0;
long long int var_10 = -7976725812956328268LL;
unsigned char var_11 = (unsigned char)185;
int var_12 = -1513980701;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
