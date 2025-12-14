#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-65;
unsigned short var_1 = (unsigned short)57316;
unsigned int var_2 = 994640160U;
signed char var_3 = (signed char)6;
short var_8 = (short)24185;
signed char var_11 = (signed char)119;
long long int var_14 = -4899684766339294476LL;
unsigned int var_17 = 4238955078U;
int zero = 0;
signed char var_18 = (signed char)-104;
unsigned short var_19 = (unsigned short)34401;
signed char var_20 = (signed char)50;
signed char var_21 = (signed char)37;
int var_22 = -1616076287;
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
