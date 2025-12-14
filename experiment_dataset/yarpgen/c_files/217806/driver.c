#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -521146516300977033LL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
long long int var_6 = -8010130358445730266LL;
int var_9 = 1789226465;
_Bool var_11 = (_Bool)1;
signed char var_15 = (signed char)-88;
int zero = 0;
unsigned char var_16 = (unsigned char)219;
short var_17 = (short)-32556;
int var_18 = -1590432426;
int var_19 = 856257938;
unsigned long long int var_20 = 15236613566952003143ULL;
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
