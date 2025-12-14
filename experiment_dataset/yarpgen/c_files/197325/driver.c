#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16991318872008353304ULL;
short var_1 = (short)27638;
unsigned long long int var_6 = 3606086324288882042ULL;
signed char var_7 = (signed char)30;
short var_8 = (short)32569;
short var_9 = (short)-16612;
long long int var_10 = 7587962636242834954LL;
int var_11 = 504900041;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)47300;
signed char var_17 = (signed char)-23;
unsigned int var_18 = 2901365626U;
unsigned char var_19 = (unsigned char)192;
unsigned short var_20 = (unsigned short)30374;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
