#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1482471923;
long long int var_2 = 6029006099643438077LL;
unsigned short var_3 = (unsigned short)28792;
unsigned short var_4 = (unsigned short)17384;
long long int var_5 = -663676798178628809LL;
_Bool var_9 = (_Bool)1;
int var_11 = 448517367;
unsigned short var_12 = (unsigned short)59789;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 12711910825018499605ULL;
int zero = 0;
unsigned long long int var_19 = 6191560359538493445ULL;
unsigned long long int var_20 = 1723068474561634388ULL;
_Bool var_21 = (_Bool)1;
long long int var_22 = -2364796884568955428LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
