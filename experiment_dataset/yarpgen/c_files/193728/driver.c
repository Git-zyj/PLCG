#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)131;
int var_4 = 927619086;
signed char var_5 = (signed char)90;
int zero = 0;
int var_19 = 1438989372;
long long int var_20 = 7066061885664292608LL;
unsigned short var_21 = (unsigned short)65482;
long long int var_22 = -2481961569309684026LL;
void init() {
}

void checksum() {
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
