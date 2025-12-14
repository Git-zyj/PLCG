#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 97787574U;
unsigned long long int var_2 = 10648213397710915310ULL;
unsigned short var_3 = (unsigned short)47117;
unsigned char var_4 = (unsigned char)66;
unsigned char var_5 = (unsigned char)37;
unsigned long long int var_6 = 7969027657760844743ULL;
unsigned int var_7 = 1974478596U;
unsigned short var_8 = (unsigned short)65353;
signed char var_9 = (signed char)-83;
unsigned int var_10 = 1490021307U;
unsigned long long int var_11 = 4473758746707620ULL;
int var_12 = -198460852;
unsigned char var_13 = (unsigned char)197;
unsigned short var_14 = (unsigned short)26403;
int zero = 0;
signed char var_15 = (signed char)102;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 6117355936955381429ULL;
signed char var_18 = (signed char)-52;
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
