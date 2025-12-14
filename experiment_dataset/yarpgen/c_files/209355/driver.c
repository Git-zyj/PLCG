#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)127;
short var_2 = (short)-12081;
short var_5 = (short)-13788;
int var_11 = -1978869181;
short var_14 = (short)25161;
long long int var_15 = -4912682585207557618LL;
int zero = 0;
short var_18 = (short)-13438;
unsigned int var_19 = 3568717063U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
