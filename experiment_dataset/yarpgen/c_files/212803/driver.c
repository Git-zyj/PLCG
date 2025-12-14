#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 981546417U;
int var_2 = -1145118610;
unsigned char var_3 = (unsigned char)232;
long long int var_4 = -5808730124232036520LL;
unsigned short var_5 = (unsigned short)3515;
unsigned char var_6 = (unsigned char)73;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)-46;
unsigned int var_10 = 2017295668U;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3601009272U;
long long int var_13 = 4887392026747670466LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
