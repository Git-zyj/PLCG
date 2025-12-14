#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1577571264U;
long long int var_8 = 8878808677500784252LL;
unsigned char var_9 = (unsigned char)1;
unsigned long long int var_10 = 7913693625768126296ULL;
signed char var_17 = (signed char)-38;
int zero = 0;
int var_18 = 1719173525;
int var_19 = 1912201372;
long long int var_20 = -362942969119926783LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
