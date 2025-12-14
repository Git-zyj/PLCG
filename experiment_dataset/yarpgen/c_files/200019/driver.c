#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3526797128947579539LL;
short var_7 = (short)10257;
unsigned char var_15 = (unsigned char)255;
unsigned short var_19 = (unsigned short)23457;
int zero = 0;
unsigned long long int var_20 = 4615818667232099432ULL;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)104;
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
