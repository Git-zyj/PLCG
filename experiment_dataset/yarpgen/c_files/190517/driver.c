#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1541595216;
signed char var_1 = (signed char)1;
int var_3 = -1896314226;
long long int var_5 = 5619780402727905970LL;
int var_6 = 848425490;
unsigned char var_7 = (unsigned char)136;
unsigned int var_8 = 176913762U;
unsigned int var_10 = 3033707511U;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-30231;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
