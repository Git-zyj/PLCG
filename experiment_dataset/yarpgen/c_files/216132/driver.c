#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)944;
signed char var_3 = (signed char)57;
long long int var_5 = -5447955490155314287LL;
unsigned short var_8 = (unsigned short)31472;
signed char var_10 = (signed char)25;
short var_12 = (short)29182;
unsigned char var_14 = (unsigned char)247;
long long int var_15 = 8794853862756492631LL;
int var_16 = -1768209466;
int zero = 0;
int var_17 = 1370047377;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 16684811488803358577ULL;
short var_20 = (short)-6918;
long long int var_21 = -4239587297603130534LL;
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
