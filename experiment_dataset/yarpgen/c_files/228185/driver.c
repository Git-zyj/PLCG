#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)109;
unsigned char var_1 = (unsigned char)254;
unsigned int var_2 = 2077594566U;
unsigned short var_3 = (unsigned short)48954;
unsigned int var_4 = 3551513023U;
long long int var_5 = -2131121096797986295LL;
short var_6 = (short)-30804;
unsigned short var_7 = (unsigned short)12912;
unsigned int var_8 = 1035677357U;
unsigned int var_9 = 1636992160U;
unsigned short var_10 = (unsigned short)42144;
signed char var_11 = (signed char)120;
long long int var_12 = 5316849558449733199LL;
int zero = 0;
short var_13 = (short)-4936;
unsigned short var_14 = (unsigned short)53947;
unsigned short var_15 = (unsigned short)3760;
unsigned char var_16 = (unsigned char)75;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
