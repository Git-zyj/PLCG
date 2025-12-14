#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 15491093448884273329ULL;
unsigned int var_2 = 3912878323U;
unsigned long long int var_3 = 210533351546084780ULL;
unsigned short var_7 = (unsigned short)23240;
int var_8 = -2141511674;
unsigned long long int var_9 = 815163640217929234ULL;
signed char var_10 = (signed char)-52;
short var_11 = (short)22197;
int zero = 0;
unsigned int var_12 = 2419087877U;
unsigned long long int var_13 = 10243753532885719220ULL;
signed char var_14 = (signed char)0;
unsigned short var_15 = (unsigned short)20341;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
