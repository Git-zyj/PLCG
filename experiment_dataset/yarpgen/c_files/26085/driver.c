#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-33;
long long int var_4 = -6426289328621094425LL;
unsigned int var_6 = 730841091U;
int var_8 = 90680499;
_Bool var_9 = (_Bool)0;
int var_10 = 1614273275;
unsigned char var_11 = (unsigned char)12;
signed char var_13 = (signed char)83;
unsigned long long int var_15 = 6531842955224793122ULL;
int zero = 0;
short var_17 = (short)28497;
int var_18 = -1569457523;
unsigned short var_19 = (unsigned short)18793;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
