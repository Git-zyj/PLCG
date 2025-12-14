#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35984;
unsigned short var_2 = (unsigned short)57203;
short var_3 = (short)-14381;
long long int var_4 = 769472676687201414LL;
unsigned short var_5 = (unsigned short)32288;
short var_6 = (short)13351;
short var_7 = (short)10058;
unsigned char var_10 = (unsigned char)26;
int zero = 0;
unsigned char var_11 = (unsigned char)28;
short var_12 = (short)1012;
unsigned long long int var_13 = 6307461015172147181ULL;
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
