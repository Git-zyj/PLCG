#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1759461436326371832LL;
short var_4 = (short)-10205;
unsigned char var_6 = (unsigned char)92;
unsigned long long int var_8 = 10038492619525876046ULL;
unsigned char var_9 = (unsigned char)116;
short var_11 = (short)5036;
long long int var_12 = -7403486048433817049LL;
unsigned long long int var_13 = 8734869087053605672ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_18 = -5895878716088243412LL;
unsigned char var_19 = (unsigned char)232;
int var_20 = -494642754;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
