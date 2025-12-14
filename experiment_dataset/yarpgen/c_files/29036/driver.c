#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1068516397U;
unsigned char var_1 = (unsigned char)9;
int var_2 = 1487849925;
short var_3 = (short)-11008;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)44;
signed char var_9 = (signed char)94;
unsigned char var_10 = (unsigned char)67;
short var_12 = (short)-6619;
signed char var_14 = (signed char)-67;
unsigned int var_15 = 3197165768U;
signed char var_16 = (signed char)-118;
unsigned char var_17 = (unsigned char)211;
int zero = 0;
unsigned int var_18 = 2376600584U;
unsigned char var_19 = (unsigned char)52;
unsigned int var_20 = 100800574U;
void init() {
}

void checksum() {
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
