#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7008556581435923412LL;
short var_1 = (short)-16459;
unsigned short var_4 = (unsigned short)11200;
int var_5 = 984650331;
unsigned int var_6 = 1963432913U;
short var_7 = (short)23364;
unsigned short var_8 = (unsigned short)6716;
unsigned char var_9 = (unsigned char)178;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)202;
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
