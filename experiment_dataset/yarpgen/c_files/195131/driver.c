#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12812897416100321150ULL;
short var_4 = (short)14712;
unsigned char var_5 = (unsigned char)235;
unsigned int var_6 = 4006137212U;
unsigned int var_8 = 3235205610U;
unsigned char var_9 = (unsigned char)45;
short var_14 = (short)-27114;
signed char var_15 = (signed char)50;
signed char var_17 = (signed char)89;
_Bool var_19 = (_Bool)0;
int zero = 0;
long long int var_20 = 5500328568997610592LL;
short var_21 = (short)20281;
unsigned short var_22 = (unsigned short)14706;
signed char var_23 = (signed char)-40;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
