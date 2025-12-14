#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4346337004739488718LL;
int var_3 = 1958148133;
unsigned short var_4 = (unsigned short)6855;
long long int var_5 = 3244575535748915063LL;
long long int var_11 = -4913088299333002380LL;
_Bool var_13 = (_Bool)0;
short var_14 = (short)26122;
int zero = 0;
long long int var_18 = -7400269623867334131LL;
short var_19 = (short)28374;
void init() {
}

void checksum() {
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
