#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5757401350936742744LL;
unsigned int var_1 = 828905807U;
unsigned short var_3 = (unsigned short)31940;
unsigned short var_4 = (unsigned short)23420;
unsigned char var_5 = (unsigned char)70;
unsigned long long int var_6 = 266634883133295740ULL;
unsigned short var_7 = (unsigned short)27873;
unsigned int var_8 = 3842396991U;
unsigned short var_9 = (unsigned short)50297;
unsigned char var_11 = (unsigned char)17;
unsigned short var_14 = (unsigned short)61363;
int zero = 0;
short var_15 = (short)-15857;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
