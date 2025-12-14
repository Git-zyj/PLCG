#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7188807099099792327ULL;
int var_4 = -614127023;
unsigned int var_6 = 4145471621U;
long long int var_7 = -5474975409453104739LL;
int var_9 = -465645715;
unsigned int var_13 = 1805313319U;
unsigned short var_14 = (unsigned short)25926;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-70;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
