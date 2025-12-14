#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6710430866355800316LL;
short var_3 = (short)-20797;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)169;
long long int var_7 = -7390686470513537863LL;
long long int var_8 = 33338158502817971LL;
unsigned int var_14 = 1592044949U;
unsigned int var_15 = 3209529314U;
int zero = 0;
unsigned short var_18 = (unsigned short)56532;
short var_19 = (short)14988;
unsigned long long int var_20 = 15052072797207833467ULL;
unsigned long long int var_21 = 11037133775784152818ULL;
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
