#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18226505717999474208ULL;
short var_1 = (short)5480;
short var_4 = (short)24927;
unsigned long long int var_5 = 11598756469074408815ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2921384379U;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)16800;
int zero = 0;
unsigned long long int var_11 = 14551158789184294803ULL;
short var_12 = (short)20703;
unsigned char var_13 = (unsigned char)73;
unsigned char var_14 = (unsigned char)108;
void init() {
}

void checksum() {
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
