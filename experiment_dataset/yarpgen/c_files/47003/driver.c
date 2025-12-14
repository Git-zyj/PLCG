#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47841;
unsigned long long int var_2 = 4212281140105502006ULL;
unsigned short var_5 = (unsigned short)21012;
unsigned int var_7 = 4027811485U;
_Bool var_9 = (_Bool)1;
int var_10 = -59439022;
unsigned short var_14 = (unsigned short)40989;
short var_15 = (short)19358;
int zero = 0;
unsigned short var_17 = (unsigned short)53724;
unsigned long long int var_18 = 4671987869961408919ULL;
int var_19 = 1953035867;
int var_20 = -12518285;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
