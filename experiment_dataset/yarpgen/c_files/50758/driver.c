#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3676604005863952129LL;
int var_4 = -539579711;
unsigned int var_5 = 646108456U;
short var_8 = (short)7900;
unsigned char var_9 = (unsigned char)204;
unsigned long long int var_13 = 11074564854454960518ULL;
int zero = 0;
long long int var_16 = 7669021743104090223LL;
long long int var_17 = -2202011023276012911LL;
_Bool var_18 = (_Bool)1;
long long int var_19 = -8184307979470787343LL;
void init() {
}

void checksum() {
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
