#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)168;
int var_5 = 1355554007;
short var_6 = (short)31662;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 18431389192342777437ULL;
long long int var_19 = 4377156895836123505LL;
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
