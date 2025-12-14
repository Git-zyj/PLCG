#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-10604;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 9348968031336601864ULL;
unsigned long long int var_10 = 13861063460019553874ULL;
unsigned long long int var_12 = 15365943034960589170ULL;
long long int var_14 = 7040043331633850656LL;
long long int var_18 = -8578868381735723089LL;
int zero = 0;
unsigned int var_20 = 435660225U;
unsigned long long int var_21 = 1000896917918973520ULL;
long long int var_22 = -1799449346902994437LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
