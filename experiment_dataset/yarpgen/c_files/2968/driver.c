#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4110135004650149952LL;
_Bool var_2 = (_Bool)0;
long long int var_3 = 5265583956785533845LL;
long long int var_4 = -5092396008812498035LL;
unsigned long long int var_6 = 3748116925341513048ULL;
_Bool var_7 = (_Bool)0;
int var_9 = 1990307595;
short var_10 = (short)-16628;
long long int var_12 = 2471014897527725387LL;
short var_14 = (short)17093;
unsigned char var_16 = (unsigned char)235;
int zero = 0;
long long int var_17 = -8677675444984176144LL;
unsigned int var_18 = 2688670308U;
int var_19 = -2051596272;
unsigned long long int var_20 = 13682752863584871015ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
