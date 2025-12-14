#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)6096;
_Bool var_7 = (_Bool)0;
long long int var_9 = -7648171030429723224LL;
unsigned char var_11 = (unsigned char)250;
int var_13 = -1538530329;
short var_18 = (short)-26799;
int zero = 0;
long long int var_19 = 5886263029671748924LL;
int var_20 = -977944355;
long long int var_21 = -3490744374000609459LL;
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
