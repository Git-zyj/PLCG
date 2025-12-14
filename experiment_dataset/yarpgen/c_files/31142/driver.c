#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 285631736;
int var_1 = -60223653;
unsigned char var_4 = (unsigned char)179;
int var_5 = 151603509;
int var_7 = -1841437306;
unsigned int var_8 = 2632452167U;
signed char var_11 = (signed char)27;
int zero = 0;
short var_18 = (short)26039;
long long int var_19 = -2749454744274833729LL;
unsigned int var_20 = 3334923643U;
signed char var_21 = (signed char)-124;
unsigned char var_22 = (unsigned char)197;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
