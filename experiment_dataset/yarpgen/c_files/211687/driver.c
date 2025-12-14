#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10579559845301619742ULL;
unsigned char var_1 = (unsigned char)196;
int var_3 = -1603347052;
int var_4 = -2125955472;
int var_6 = -1377264503;
int var_7 = 412405417;
unsigned long long int var_12 = 725553586777247049ULL;
unsigned long long int var_13 = 9934174018530904808ULL;
unsigned int var_15 = 3096553159U;
int zero = 0;
unsigned long long int var_16 = 10220105163853129863ULL;
unsigned long long int var_17 = 7537054004124756996ULL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
