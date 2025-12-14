#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10470;
short var_1 = (short)-23493;
int var_2 = -566414704;
int var_4 = -1668275801;
unsigned int var_8 = 1913371812U;
unsigned int var_9 = 1259534015U;
int var_10 = -1627230937;
int var_13 = -914848616;
_Bool var_19 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)9;
int var_21 = 1883961663;
unsigned char var_22 = (unsigned char)78;
long long int var_23 = -7260294241556786655LL;
signed char var_24 = (signed char)-20;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
