#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43694;
unsigned long long int var_4 = 14667453959751688623ULL;
long long int var_5 = 6241794744356533140LL;
short var_8 = (short)-11315;
int var_10 = -941921717;
unsigned int var_11 = 4244342547U;
unsigned long long int var_12 = 17667795630016992926ULL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)29156;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)126;
unsigned long long int var_19 = 11782210181703141545ULL;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)26081;
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
