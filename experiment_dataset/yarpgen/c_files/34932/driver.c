#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4768228197054723512LL;
unsigned short var_4 = (unsigned short)62713;
unsigned long long int var_5 = 11000053470528957541ULL;
unsigned short var_8 = (unsigned short)36244;
_Bool var_10 = (_Bool)1;
unsigned char var_16 = (unsigned char)244;
int zero = 0;
signed char var_18 = (signed char)-44;
unsigned long long int var_19 = 9900054517244766039ULL;
_Bool var_20 = (_Bool)0;
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
