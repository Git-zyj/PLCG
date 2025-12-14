#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17477;
long long int var_3 = -45336064849773623LL;
unsigned char var_4 = (unsigned char)119;
signed char var_6 = (signed char)89;
unsigned char var_7 = (unsigned char)117;
unsigned long long int var_8 = 5230266016002719805ULL;
short var_9 = (short)-25542;
int var_10 = 1628850395;
signed char var_11 = (signed char)-77;
short var_12 = (short)25208;
int zero = 0;
short var_13 = (short)-14607;
unsigned long long int var_14 = 5965032411943395023ULL;
unsigned long long int var_15 = 17486392831862474315ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
