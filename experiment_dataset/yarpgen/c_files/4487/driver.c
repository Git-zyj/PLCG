#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)15481;
long long int var_7 = 9027389150561934055LL;
short var_9 = (short)24658;
unsigned long long int var_11 = 7192284919711181443ULL;
int var_12 = 1333689805;
unsigned short var_13 = (unsigned short)30340;
unsigned short var_14 = (unsigned short)12239;
int zero = 0;
long long int var_16 = -4433581732671166774LL;
long long int var_17 = -6826301878777985596LL;
unsigned long long int var_18 = 16759638509662599743ULL;
void init() {
}

void checksum() {
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
