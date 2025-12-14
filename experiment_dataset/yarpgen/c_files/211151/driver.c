#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8434471936993583020ULL;
long long int var_4 = 6292377012426591201LL;
unsigned long long int var_6 = 8642869773604025965ULL;
unsigned long long int var_8 = 3935810531613380576ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_17 = -1566300300105833063LL;
long long int var_18 = -3315858973770544816LL;
short var_19 = (short)-3952;
signed char var_20 = (signed char)-14;
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
