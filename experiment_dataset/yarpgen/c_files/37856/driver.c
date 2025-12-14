#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1606828106635046084ULL;
short var_4 = (short)-22088;
int var_5 = 1844823721;
unsigned char var_6 = (unsigned char)172;
_Bool var_8 = (_Bool)1;
int var_9 = -1045057938;
int zero = 0;
signed char var_10 = (signed char)-114;
long long int var_11 = 6596984235574732566LL;
long long int var_12 = 1635675858128775382LL;
signed char var_13 = (signed char)-68;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
