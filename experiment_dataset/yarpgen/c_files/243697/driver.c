#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8357545841091609107LL;
_Bool var_1 = (_Bool)0;
long long int var_2 = 8749879099462545433LL;
long long int var_4 = -9184406132578726061LL;
long long int var_5 = -2742189306497425790LL;
long long int var_10 = -9117248853873811338LL;
unsigned int var_11 = 1745887154U;
unsigned long long int var_12 = 3108330112261559286ULL;
long long int var_16 = -7141442134391850004LL;
int zero = 0;
long long int var_17 = -4046347774426165496LL;
unsigned short var_18 = (unsigned short)16156;
long long int var_19 = 8657445840004248727LL;
void init() {
}

void checksum() {
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
