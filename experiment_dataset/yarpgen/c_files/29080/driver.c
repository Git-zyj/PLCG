#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)17;
unsigned short var_2 = (unsigned short)14147;
_Bool var_8 = (_Bool)1;
long long int var_9 = -2414352767966779537LL;
unsigned short var_10 = (unsigned short)22126;
long long int var_16 = 1932151302181184728LL;
int zero = 0;
long long int var_17 = 8170281495286294094LL;
short var_18 = (short)15750;
void init() {
}

void checksum() {
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
