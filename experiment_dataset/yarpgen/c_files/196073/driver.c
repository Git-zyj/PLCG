#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-42;
long long int var_1 = 1188993118469800350LL;
signed char var_2 = (signed char)22;
unsigned long long int var_3 = 8282267599012096334ULL;
int var_6 = 149167241;
_Bool var_8 = (_Bool)1;
long long int var_10 = -5158147636774739454LL;
unsigned int var_11 = 1617464766U;
unsigned short var_13 = (unsigned short)35039;
int zero = 0;
signed char var_14 = (signed char)-104;
long long int var_15 = 8986825769705513484LL;
signed char var_16 = (signed char)-42;
long long int var_17 = 7742998175223423852LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
