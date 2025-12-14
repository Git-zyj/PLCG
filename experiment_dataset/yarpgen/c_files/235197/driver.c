#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8070081863756340608ULL;
unsigned long long int var_5 = 12880095868940445028ULL;
_Bool var_6 = (_Bool)0;
unsigned char var_13 = (unsigned char)15;
unsigned short var_14 = (unsigned short)56168;
unsigned short var_15 = (unsigned short)53161;
int zero = 0;
long long int var_20 = 3277960626847042438LL;
short var_21 = (short)1658;
unsigned short var_22 = (unsigned short)54125;
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
