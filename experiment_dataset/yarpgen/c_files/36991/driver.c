#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)233;
unsigned short var_4 = (unsigned short)33324;
unsigned short var_7 = (unsigned short)41225;
short var_10 = (short)-21749;
unsigned char var_11 = (unsigned char)225;
signed char var_13 = (signed char)-80;
unsigned short var_15 = (unsigned short)49091;
int var_17 = -893129507;
int zero = 0;
long long int var_18 = -6821881723662590448LL;
int var_19 = 1937788750;
_Bool var_20 = (_Bool)1;
short var_21 = (short)19138;
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
