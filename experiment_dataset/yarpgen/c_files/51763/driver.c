#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)46;
unsigned long long int var_2 = 2308468214766034821ULL;
unsigned char var_3 = (unsigned char)225;
unsigned short var_6 = (unsigned short)26027;
int zero = 0;
unsigned long long int var_16 = 11638199161221022236ULL;
long long int var_17 = -8511296500323695627LL;
unsigned long long int var_18 = 17642525641523180682ULL;
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
