#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4728;
unsigned long long int var_1 = 10900443040481949698ULL;
unsigned short var_2 = (unsigned short)48847;
unsigned int var_4 = 3227731966U;
int var_6 = 1141475776;
unsigned int var_7 = 2146703132U;
long long int var_8 = 8512888613453611756LL;
int zero = 0;
unsigned short var_10 = (unsigned short)38360;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 11720741149459034083ULL;
unsigned char var_13 = (unsigned char)241;
unsigned char var_14 = (unsigned char)104;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
