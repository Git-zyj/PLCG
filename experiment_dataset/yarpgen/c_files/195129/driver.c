#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 4252881877U;
_Bool var_7 = (_Bool)0;
int var_9 = -845791668;
unsigned char var_10 = (unsigned char)44;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)151;
int zero = 0;
unsigned short var_17 = (unsigned short)46890;
short var_18 = (short)15698;
unsigned short var_19 = (unsigned short)45748;
void init() {
}

void checksum() {
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
