#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1806623001;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 13326455807054108712ULL;
unsigned int var_3 = 3685102511U;
long long int var_4 = -2711182814289279494LL;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)44629;
unsigned long long int var_7 = 122946978552749452ULL;
unsigned char var_10 = (unsigned char)82;
long long int var_11 = -1184783200559788449LL;
int zero = 0;
int var_12 = 99642602;
unsigned int var_13 = 922627468U;
short var_14 = (short)12450;
signed char var_15 = (signed char)82;
signed char var_16 = (signed char)26;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
