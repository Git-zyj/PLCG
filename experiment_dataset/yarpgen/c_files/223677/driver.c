#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5416433500043360362ULL;
unsigned short var_1 = (unsigned short)26033;
short var_2 = (short)24398;
unsigned long long int var_4 = 3628597797280048940ULL;
long long int var_6 = 5894146719725433099LL;
signed char var_7 = (signed char)-39;
unsigned long long int var_9 = 329556310846171060ULL;
unsigned short var_10 = (unsigned short)43615;
signed char var_12 = (signed char)-15;
int var_13 = 1918725950;
unsigned char var_15 = (unsigned char)75;
unsigned long long int var_16 = 2988195763485173547ULL;
int zero = 0;
unsigned long long int var_19 = 4240503252124310825ULL;
short var_20 = (short)-14162;
unsigned short var_21 = (unsigned short)45252;
short var_22 = (short)5766;
signed char var_23 = (signed char)70;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
