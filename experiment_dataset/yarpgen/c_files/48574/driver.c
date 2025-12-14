#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)106;
signed char var_5 = (signed char)-77;
long long int var_8 = -7614716454263061497LL;
_Bool var_10 = (_Bool)1;
int var_12 = -906506358;
signed char var_13 = (signed char)115;
int zero = 0;
unsigned char var_16 = (unsigned char)122;
unsigned char var_17 = (unsigned char)38;
int var_18 = 1660011446;
int var_19 = -1781386633;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
