#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 4679867800081377433ULL;
signed char var_2 = (signed char)44;
unsigned long long int var_3 = 16301746176717766294ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 18157136074241617289ULL;
unsigned short var_9 = (unsigned short)25946;
long long int var_11 = -2250239158443201902LL;
long long int var_13 = 8459526875639888272LL;
int zero = 0;
unsigned long long int var_14 = 5374529255769661741ULL;
long long int var_15 = 4038523903891439268LL;
unsigned long long int var_16 = 5794498462998230970ULL;
long long int var_17 = -4286468319081704547LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
