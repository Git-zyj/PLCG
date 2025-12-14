#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4739258689378212062ULL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_8 = 13567911145615433002ULL;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)118;
unsigned short var_13 = (unsigned short)25497;
unsigned long long int var_15 = 8853613118067679793ULL;
short var_16 = (short)32442;
_Bool var_17 = (_Bool)1;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)21090;
unsigned short var_21 = (unsigned short)57549;
unsigned short var_22 = (unsigned short)1437;
unsigned int var_23 = 151746207U;
signed char var_24 = (signed char)-46;
unsigned int var_25 = 3125192489U;
_Bool var_26 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
