#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)126;
unsigned long long int var_7 = 8603020214525371421ULL;
unsigned int var_8 = 631573110U;
_Bool var_10 = (_Bool)0;
unsigned short var_17 = (unsigned short)18352;
unsigned char var_19 = (unsigned char)114;
int zero = 0;
short var_20 = (short)12315;
unsigned char var_21 = (unsigned char)202;
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
