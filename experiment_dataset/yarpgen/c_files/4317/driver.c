#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 3792021910U;
unsigned char var_6 = (unsigned char)27;
long long int var_7 = -3252374520375773768LL;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned char var_14 = (unsigned char)246;
int zero = 0;
unsigned long long int var_16 = 18370333386774546651ULL;
signed char var_17 = (signed char)34;
void init() {
}

void checksum() {
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
