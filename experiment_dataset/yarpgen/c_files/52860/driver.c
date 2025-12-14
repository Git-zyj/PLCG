#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)195;
_Bool var_3 = (_Bool)0;
int var_4 = -1861477939;
unsigned char var_5 = (unsigned char)111;
unsigned short var_6 = (unsigned short)28677;
unsigned long long int var_9 = 6082530203155088090ULL;
long long int var_11 = -5630293844502225411LL;
unsigned long long int var_17 = 11080395241710957867ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)172;
long long int var_20 = 8963019333882363552LL;
unsigned short var_21 = (unsigned short)1651;
short var_22 = (short)2056;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
