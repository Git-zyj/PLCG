#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -607673664;
_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)-53;
short var_5 = (short)-1991;
int var_10 = -509769444;
long long int var_11 = 5389764270715232527LL;
unsigned long long int var_12 = 17117524734847970419ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)186;
short var_16 = (short)-12031;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
