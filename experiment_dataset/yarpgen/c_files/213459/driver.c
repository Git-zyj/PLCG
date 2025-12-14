#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54315;
unsigned char var_2 = (unsigned char)82;
unsigned char var_3 = (unsigned char)71;
long long int var_4 = -7229928414871370664LL;
unsigned long long int var_6 = 12846736646460640842ULL;
long long int var_7 = 157704673644159713LL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)203;
int zero = 0;
short var_15 = (short)15808;
long long int var_16 = -1763388459302777258LL;
unsigned short var_17 = (unsigned short)64419;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)193;
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
