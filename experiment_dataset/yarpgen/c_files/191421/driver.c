#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8103675591664334281ULL;
short var_2 = (short)-22935;
int var_3 = 543274483;
long long int var_5 = -1087438994460329080LL;
int var_6 = -1639523605;
short var_8 = (short)-27190;
short var_9 = (short)32003;
int zero = 0;
int var_10 = 1027113824;
int var_11 = 1096286038;
unsigned char var_12 = (unsigned char)145;
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
