#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1752735847U;
unsigned short var_4 = (unsigned short)22282;
short var_7 = (short)23879;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 4180442456U;
int zero = 0;
unsigned int var_16 = 241578677U;
unsigned short var_17 = (unsigned short)26602;
short var_18 = (short)1603;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
