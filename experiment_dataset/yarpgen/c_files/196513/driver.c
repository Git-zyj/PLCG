#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)117;
int var_2 = 1451721243;
unsigned char var_3 = (unsigned char)83;
unsigned long long int var_6 = 8023682912921647233ULL;
unsigned char var_8 = (unsigned char)36;
int var_12 = -235221010;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)-33;
short var_16 = (short)5194;
unsigned long long int var_17 = 2374786951304404864ULL;
unsigned char var_18 = (unsigned char)36;
unsigned short var_19 = (unsigned short)51265;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
