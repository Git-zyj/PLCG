#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28964;
short var_3 = (short)-24318;
signed char var_5 = (signed char)46;
unsigned char var_8 = (unsigned char)242;
unsigned long long int var_10 = 5393193043653354555ULL;
short var_11 = (short)17233;
unsigned int var_14 = 2212632020U;
unsigned short var_15 = (unsigned short)54970;
short var_16 = (short)12224;
int zero = 0;
long long int var_17 = 7511367229145084125LL;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-111;
unsigned int var_20 = 3746655843U;
signed char var_21 = (signed char)12;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
