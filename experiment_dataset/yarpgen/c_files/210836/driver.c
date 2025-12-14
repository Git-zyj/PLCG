#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 784394690;
unsigned int var_2 = 640508333U;
signed char var_4 = (signed char)-125;
long long int var_5 = -7542823485046868853LL;
unsigned char var_6 = (unsigned char)184;
unsigned long long int var_7 = 10941008115714282353ULL;
unsigned int var_9 = 1385504329U;
short var_10 = (short)30146;
int var_16 = -1199795439;
int zero = 0;
unsigned char var_17 = (unsigned char)83;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)92;
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
