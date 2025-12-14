#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_6 = 2008243616954718010LL;
long long int var_7 = -3311996016311124770LL;
unsigned int var_8 = 3729352392U;
long long int var_9 = 5650565242401295509LL;
signed char var_10 = (signed char)107;
unsigned long long int var_11 = 4742841269104715773ULL;
unsigned long long int var_13 = 14798915101169344732ULL;
int var_14 = -1434471246;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_17 = -1201388674908083057LL;
signed char var_18 = (signed char)(-127 - 1);
unsigned int var_19 = 1649982744U;
void init() {
}

void checksum() {
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
