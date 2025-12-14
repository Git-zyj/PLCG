#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)1933;
unsigned long long int var_6 = 13511059816204837039ULL;
short var_8 = (short)-24703;
int zero = 0;
short var_20 = (short)-32429;
short var_21 = (short)31802;
long long int var_22 = 372588286043235996LL;
unsigned short var_23 = (unsigned short)13348;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
