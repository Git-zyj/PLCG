#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1766703540;
long long int var_5 = 6926180274003932868LL;
unsigned int var_7 = 4093685711U;
int var_9 = -1194290232;
short var_10 = (short)1181;
int zero = 0;
unsigned char var_11 = (unsigned char)210;
unsigned char var_12 = (unsigned char)147;
_Bool var_13 = (_Bool)0;
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
