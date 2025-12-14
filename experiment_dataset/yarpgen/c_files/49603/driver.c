#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 452679655208412827LL;
long long int var_2 = 8572572351093611296LL;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1761935732U;
short var_5 = (short)13566;
unsigned int var_7 = 2052578887U;
long long int var_10 = -3394886642370162219LL;
long long int var_11 = 7855724947199867030LL;
int zero = 0;
unsigned short var_15 = (unsigned short)35242;
unsigned long long int var_16 = 17941413322685465085ULL;
signed char var_17 = (signed char)-20;
unsigned long long int var_18 = 17478849305396202863ULL;
signed char var_19 = (signed char)48;
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
