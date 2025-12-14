#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)116;
signed char var_1 = (signed char)-119;
unsigned short var_2 = (unsigned short)1855;
_Bool var_3 = (_Bool)1;
short var_4 = (short)125;
unsigned long long int var_8 = 12869803376898595644ULL;
unsigned long long int var_9 = 3695530812146868259ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)51921;
int var_12 = -366938365;
unsigned char var_13 = (unsigned char)32;
unsigned long long int var_14 = 13086979036027920760ULL;
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
