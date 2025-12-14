#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12185;
unsigned long long int var_2 = 1064135132602902405ULL;
long long int var_4 = 6356176315164152411LL;
unsigned long long int var_5 = 4971407309144550262ULL;
unsigned long long int var_7 = 4328956699017924170ULL;
unsigned int var_8 = 3497949040U;
int var_9 = -474023734;
unsigned int var_12 = 3260027511U;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -818013245383538804LL;
unsigned long long int var_16 = 14729270868040551278ULL;
unsigned long long int var_17 = 16630940921640607922ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
