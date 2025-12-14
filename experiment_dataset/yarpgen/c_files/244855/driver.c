#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54267;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-3800;
unsigned int var_5 = 1409625001U;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_10 = 8396909537309334409LL;
long long int var_11 = -7655166626906718999LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
