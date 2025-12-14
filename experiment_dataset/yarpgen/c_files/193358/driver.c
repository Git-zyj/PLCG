#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3786115730120382407LL;
signed char var_1 = (signed char)-127;
unsigned short var_5 = (unsigned short)20475;
unsigned int var_8 = 2956978247U;
unsigned char var_9 = (unsigned char)172;
short var_10 = (short)-25949;
unsigned long long int var_11 = 612823697854147748ULL;
long long int var_12 = -2513392540781803569LL;
unsigned short var_14 = (unsigned short)49894;
int zero = 0;
unsigned short var_15 = (unsigned short)54035;
unsigned short var_16 = (unsigned short)57521;
int var_17 = 839091098;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
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
