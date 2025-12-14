#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8423912198731224098LL;
unsigned char var_4 = (unsigned char)164;
unsigned short var_5 = (unsigned short)48610;
_Bool var_11 = (_Bool)0;
unsigned char var_14 = (unsigned char)251;
unsigned char var_15 = (unsigned char)163;
unsigned short var_16 = (unsigned short)11163;
int zero = 0;
int var_17 = 2029479936;
short var_18 = (short)-1823;
unsigned char var_19 = (unsigned char)219;
signed char var_20 = (signed char)3;
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
