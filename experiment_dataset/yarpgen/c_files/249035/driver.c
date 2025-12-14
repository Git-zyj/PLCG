#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8034490152410253610LL;
unsigned short var_4 = (unsigned short)53433;
short var_8 = (short)-9121;
unsigned short var_11 = (unsigned short)56014;
unsigned long long int var_14 = 9772279650595756701ULL;
int zero = 0;
signed char var_18 = (signed char)53;
unsigned char var_19 = (unsigned char)151;
signed char var_20 = (signed char)106;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
