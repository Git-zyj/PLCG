#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 230024840226814443LL;
signed char var_1 = (signed char)124;
signed char var_2 = (signed char)100;
short var_3 = (short)-23708;
short var_9 = (short)-23479;
unsigned char var_11 = (unsigned char)203;
unsigned char var_13 = (unsigned char)5;
short var_15 = (short)16200;
int zero = 0;
unsigned short var_17 = (unsigned short)29844;
_Bool var_18 = (_Bool)0;
int var_19 = 1662251663;
signed char var_20 = (signed char)-76;
void init() {
}

void checksum() {
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
