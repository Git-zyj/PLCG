#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)12516;
_Bool var_6 = (_Bool)0;
int var_7 = -1884997841;
unsigned long long int var_8 = 5042872574794453303ULL;
short var_11 = (short)-13121;
int zero = 0;
long long int var_13 = -5245571423671705898LL;
int var_14 = -974101770;
void init() {
}

void checksum() {
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
