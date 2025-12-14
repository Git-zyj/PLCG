#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)148;
int var_1 = -873300111;
unsigned char var_4 = (unsigned char)56;
short var_6 = (short)22950;
unsigned long long int var_9 = 12912758832325871789ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)45;
unsigned short var_18 = (unsigned short)30534;
int var_19 = 672651633;
short var_20 = (short)-31140;
signed char var_21 = (signed char)67;
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
