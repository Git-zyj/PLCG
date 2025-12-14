#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1780;
long long int var_1 = -207253071727908845LL;
unsigned int var_3 = 1113170697U;
unsigned int var_4 = 4281973100U;
unsigned char var_10 = (unsigned char)100;
int zero = 0;
short var_12 = (short)-10532;
short var_13 = (short)-12371;
short var_14 = (short)22570;
void init() {
}

void checksum() {
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
