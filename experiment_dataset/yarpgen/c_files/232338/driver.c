#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4517114330832207279LL;
short var_4 = (short)-22835;
short var_7 = (short)7878;
short var_10 = (short)24652;
unsigned long long int var_13 = 621630907207888931ULL;
short var_16 = (short)-6337;
int zero = 0;
unsigned char var_19 = (unsigned char)82;
long long int var_20 = 4537469478206028291LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
