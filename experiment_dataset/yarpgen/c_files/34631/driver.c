#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)179;
unsigned long long int var_5 = 3303907904182192110ULL;
int var_7 = -1240423306;
unsigned long long int var_8 = 13198147542540540947ULL;
int zero = 0;
long long int var_11 = -5684039524732143241LL;
unsigned short var_12 = (unsigned short)43764;
signed char var_13 = (signed char)112;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
