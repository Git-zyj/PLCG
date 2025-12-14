#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1943884733918524322LL;
unsigned char var_1 = (unsigned char)137;
signed char var_6 = (signed char)-48;
long long int var_7 = 1514508495932707256LL;
unsigned int var_9 = 4223795619U;
unsigned int var_10 = 521399493U;
unsigned int var_12 = 2897392231U;
long long int var_13 = -2566486848824295213LL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-1986;
unsigned short var_16 = (unsigned short)50703;
int zero = 0;
int var_17 = -1657569430;
signed char var_18 = (signed char)46;
unsigned long long int var_19 = 1004413333007338303ULL;
unsigned int var_20 = 4080796851U;
signed char var_21 = (signed char)13;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
