#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18364867367144178054ULL;
unsigned short var_2 = (unsigned short)19205;
unsigned char var_5 = (unsigned char)32;
short var_6 = (short)10989;
long long int var_8 = 5523830553456810630LL;
unsigned short var_10 = (unsigned short)25534;
unsigned short var_13 = (unsigned short)23325;
unsigned short var_18 = (unsigned short)36607;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = -9041063108836983567LL;
void init() {
}

void checksum() {
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
