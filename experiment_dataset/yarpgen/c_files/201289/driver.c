#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-35;
signed char var_4 = (signed char)126;
short var_5 = (short)-495;
unsigned short var_7 = (unsigned short)25694;
unsigned char var_12 = (unsigned char)109;
signed char var_13 = (signed char)-38;
unsigned short var_14 = (unsigned short)24685;
short var_16 = (short)-15923;
unsigned short var_18 = (unsigned short)9325;
int zero = 0;
long long int var_19 = 7520782416783713761LL;
int var_20 = 1792906069;
long long int var_21 = -206655779851934385LL;
long long int var_22 = -5767546064376415558LL;
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
