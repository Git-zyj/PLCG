#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)131;
unsigned short var_6 = (unsigned short)60421;
unsigned long long int var_7 = 16914153244416843590ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
short var_10 = (short)29583;
long long int var_11 = -7843220788228804326LL;
long long int var_12 = -9092906258775876141LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
