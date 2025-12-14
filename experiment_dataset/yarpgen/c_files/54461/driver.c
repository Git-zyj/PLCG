#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-5;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 192544918U;
unsigned long long int var_5 = 3370212520606600950ULL;
long long int var_6 = 4832877683964620590LL;
unsigned int var_8 = 173086856U;
int zero = 0;
long long int var_10 = -1813690606326941517LL;
long long int var_11 = 1365379397326638444LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
