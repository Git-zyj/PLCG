#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 974062480;
_Bool var_3 = (_Bool)1;
int var_5 = -524972308;
long long int var_7 = 6943156438804798883LL;
signed char var_8 = (signed char)-109;
short var_10 = (short)14749;
int zero = 0;
signed char var_14 = (signed char)-19;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3603974729U;
unsigned short var_17 = (unsigned short)27374;
int var_18 = 344568302;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
