#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4048839844U;
signed char var_4 = (signed char)10;
unsigned char var_6 = (unsigned char)26;
unsigned short var_9 = (unsigned short)33694;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -3179388705193798664LL;
unsigned long long int var_12 = 15614827532818298802ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
