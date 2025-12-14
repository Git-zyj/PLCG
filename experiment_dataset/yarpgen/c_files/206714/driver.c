#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)77;
signed char var_3 = (signed char)-77;
long long int var_4 = -6668845269491894474LL;
unsigned int var_5 = 945389222U;
signed char var_6 = (signed char)-21;
signed char var_10 = (signed char)-101;
short var_12 = (short)-779;
unsigned short var_15 = (unsigned short)6875;
int zero = 0;
unsigned char var_18 = (unsigned char)224;
short var_19 = (short)-17979;
long long int var_20 = -4172848793481534260LL;
int var_21 = -1200305788;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
