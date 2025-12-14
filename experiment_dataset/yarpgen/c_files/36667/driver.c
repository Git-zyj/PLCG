#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7835788594998300558ULL;
short var_2 = (short)-12497;
signed char var_5 = (signed char)70;
unsigned long long int var_6 = 7914704006166286008ULL;
long long int var_7 = 2005070784706148317LL;
short var_9 = (short)16911;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 7546238913347581054ULL;
void init() {
}

void checksum() {
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
