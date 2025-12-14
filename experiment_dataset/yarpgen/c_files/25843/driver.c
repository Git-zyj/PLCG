#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49497;
int var_1 = 1684091936;
signed char var_2 = (signed char)-118;
signed char var_5 = (signed char)-80;
unsigned short var_6 = (unsigned short)45175;
long long int var_9 = 648887100393543912LL;
unsigned short var_10 = (unsigned short)16153;
int zero = 0;
short var_15 = (short)8385;
unsigned char var_16 = (unsigned char)44;
unsigned short var_17 = (unsigned short)15011;
unsigned short var_18 = (unsigned short)35369;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
