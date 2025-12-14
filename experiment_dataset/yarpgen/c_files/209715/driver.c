#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)204;
unsigned short var_6 = (unsigned short)57045;
unsigned char var_7 = (unsigned char)138;
int zero = 0;
unsigned char var_20 = (unsigned char)248;
_Bool var_21 = (_Bool)1;
short var_22 = (short)20145;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
