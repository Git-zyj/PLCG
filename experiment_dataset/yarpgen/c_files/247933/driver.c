#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17690817086381643047ULL;
unsigned long long int var_1 = 10822383130186953701ULL;
signed char var_4 = (signed char)33;
unsigned char var_6 = (unsigned char)240;
signed char var_8 = (signed char)-110;
unsigned int var_10 = 3672430012U;
unsigned char var_11 = (unsigned char)251;
unsigned short var_12 = (unsigned short)28413;
unsigned long long int var_13 = 6839269540067835215ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 170563222386450776ULL;
signed char var_16 = (signed char)24;
long long int var_17 = 747349336998431534LL;
unsigned short var_18 = (unsigned short)3919;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
