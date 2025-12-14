#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3790;
long long int var_1 = 2072961828453160629LL;
unsigned short var_2 = (unsigned short)16332;
long long int var_3 = 4423954268147428793LL;
int var_4 = -2139263898;
unsigned int var_8 = 3771653025U;
long long int var_11 = 8574960973639399693LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_18 = 1700481801;
int var_19 = 781759655;
long long int var_20 = -1785772647056709738LL;
unsigned short var_21 = (unsigned short)18971;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
