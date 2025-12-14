#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_3 = 8705121004555736731ULL;
unsigned short var_7 = (unsigned short)31079;
_Bool var_9 = (_Bool)1;
short var_11 = (short)-14960;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)8001;
signed char var_16 = (signed char)-48;
long long int var_17 = 1700005428649779457LL;
long long int var_18 = 3198093827484145480LL;
unsigned char var_19 = (unsigned char)163;
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
