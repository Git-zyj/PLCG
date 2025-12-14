#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9813302799330782087ULL;
signed char var_3 = (signed char)30;
short var_4 = (short)4452;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-7;
unsigned long long int var_11 = 7054622593821304772ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)43382;
long long int var_18 = 4696031092176646209LL;
signed char var_19 = (signed char)-121;
unsigned short var_20 = (unsigned short)47651;
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
