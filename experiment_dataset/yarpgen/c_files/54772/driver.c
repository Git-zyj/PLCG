#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)40;
unsigned long long int var_4 = 17858687741629887689ULL;
unsigned long long int var_6 = 1058407946366608259ULL;
unsigned char var_7 = (unsigned char)214;
unsigned int var_9 = 1097036130U;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 1565665766U;
unsigned long long int var_15 = 5623576170516948722ULL;
short var_16 = (short)3553;
unsigned short var_17 = (unsigned short)27431;
long long int var_18 = -3528722609578255283LL;
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
