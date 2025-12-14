#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)75;
short var_4 = (short)-18994;
signed char var_6 = (signed char)104;
long long int var_9 = 6915012218803904174LL;
long long int var_12 = -6385952813647532796LL;
int zero = 0;
unsigned short var_17 = (unsigned short)61177;
unsigned short var_18 = (unsigned short)8706;
unsigned char var_19 = (unsigned char)91;
signed char var_20 = (signed char)-96;
_Bool var_21 = (_Bool)1;
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
