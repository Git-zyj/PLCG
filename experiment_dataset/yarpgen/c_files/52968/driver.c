#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1878104759065193696ULL;
short var_5 = (short)-24398;
unsigned long long int var_7 = 1445257286229656643ULL;
long long int var_11 = 1934820459093960264LL;
int zero = 0;
long long int var_12 = 1566953102583680729LL;
short var_13 = (short)-12650;
int var_14 = -112835357;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
