#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 137068904;
unsigned long long int var_6 = 17084101820673510904ULL;
unsigned short var_7 = (unsigned short)27512;
unsigned int var_8 = 1657406569U;
int var_9 = 1935075981;
unsigned int var_10 = 3250013899U;
unsigned short var_11 = (unsigned short)49963;
unsigned long long int var_14 = 10020937197224264296ULL;
int zero = 0;
int var_15 = 1904988759;
signed char var_16 = (signed char)81;
unsigned int var_17 = 3558744453U;
unsigned int var_18 = 2510553636U;
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
