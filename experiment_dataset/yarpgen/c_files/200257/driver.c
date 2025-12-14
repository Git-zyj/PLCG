#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 11326400008151704864ULL;
long long int var_2 = -114876739717358536LL;
unsigned int var_3 = 2252008689U;
unsigned long long int var_4 = 8635858152768596538ULL;
signed char var_6 = (signed char)121;
unsigned char var_7 = (unsigned char)1;
long long int var_8 = -7487323666514338666LL;
unsigned char var_9 = (unsigned char)15;
unsigned long long int var_13 = 6294116399183440487ULL;
unsigned int var_15 = 2044731182U;
int zero = 0;
signed char var_16 = (signed char)-124;
long long int var_17 = -398869790980631850LL;
int var_18 = -1160015865;
signed char var_19 = (signed char)53;
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
