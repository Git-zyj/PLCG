#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -754923097908394475LL;
unsigned int var_2 = 306989368U;
unsigned int var_4 = 361229186U;
unsigned short var_5 = (unsigned short)62533;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-6480;
unsigned short var_8 = (unsigned short)25356;
_Bool var_9 = (_Bool)1;
long long int var_10 = -2019846955246434951LL;
short var_12 = (short)-9003;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_15 = (short)-3098;
short var_16 = (short)344;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)53996;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
