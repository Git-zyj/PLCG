#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4397044896917940217LL;
unsigned long long int var_4 = 12249556848750023957ULL;
long long int var_9 = 1361694545402457816LL;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-40;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_14 = -4558405326782858569LL;
unsigned short var_15 = (unsigned short)19662;
unsigned int var_16 = 1676070843U;
short var_17 = (short)4379;
unsigned char var_18 = (unsigned char)144;
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
