#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)240;
short var_3 = (short)-12252;
unsigned short var_5 = (unsigned short)21456;
unsigned long long int var_6 = 7839775485407448002ULL;
unsigned char var_7 = (unsigned char)161;
long long int var_8 = -8246265604643557669LL;
unsigned char var_18 = (unsigned char)191;
int zero = 0;
unsigned char var_19 = (unsigned char)150;
_Bool var_20 = (_Bool)1;
long long int var_21 = 7495702799106052685LL;
void init() {
}

void checksum() {
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
