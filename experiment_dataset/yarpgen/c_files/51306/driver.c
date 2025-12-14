#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11550980694415378257ULL;
unsigned char var_2 = (unsigned char)47;
unsigned long long int var_4 = 10407047398671686992ULL;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-124;
unsigned long long int var_9 = 1704572042126725179ULL;
int zero = 0;
long long int var_10 = -9189815724813368134LL;
signed char var_11 = (signed char)97;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
