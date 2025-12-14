#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3350104880U;
long long int var_2 = 1899698619406827952LL;
short var_3 = (short)-16566;
unsigned short var_4 = (unsigned short)53114;
long long int var_6 = 7229202315408570964LL;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 242882078U;
long long int var_10 = -8486135025577601569LL;
long long int var_11 = 5950522498699894331LL;
unsigned int var_12 = 4022642648U;
_Bool var_13 = (_Bool)0;
signed char var_15 = (signed char)90;
unsigned int var_16 = 2282435601U;
long long int var_17 = -3625249498826104320LL;
int zero = 0;
signed char var_18 = (signed char)121;
unsigned char var_19 = (unsigned char)42;
unsigned int var_20 = 513858311U;
int var_21 = 386635610;
unsigned int var_22 = 2813332566U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
