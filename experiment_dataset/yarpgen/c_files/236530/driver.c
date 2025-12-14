#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6768118319642171978LL;
signed char var_1 = (signed char)-115;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
short var_6 = (short)-8797;
short var_7 = (short)-2438;
unsigned int var_8 = 3538359854U;
unsigned int var_9 = 3915518973U;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 18038959932749561964ULL;
int zero = 0;
unsigned int var_15 = 1980923364U;
long long int var_16 = -9050214096800621628LL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
