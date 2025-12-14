#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8128;
unsigned long long int var_2 = 15314988253008987439ULL;
unsigned short var_4 = (unsigned short)32617;
unsigned int var_10 = 1508051569U;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 11855437905031569143ULL;
unsigned long long int var_17 = 15158725964447329729ULL;
short var_18 = (short)-12446;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
