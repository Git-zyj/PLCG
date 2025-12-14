#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5520334175454857480LL;
unsigned short var_5 = (unsigned short)16086;
unsigned int var_6 = 2430611476U;
unsigned char var_8 = (unsigned char)189;
unsigned short var_11 = (unsigned short)731;
short var_12 = (short)2752;
unsigned short var_15 = (unsigned short)51729;
unsigned long long int var_17 = 15239119129511525281ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)43315;
long long int var_19 = -8278994102096727801LL;
void init() {
}

void checksum() {
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
