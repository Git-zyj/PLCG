#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8716585069726237638LL;
long long int var_4 = -8445166602421539294LL;
short var_7 = (short)29558;
long long int var_11 = -1817791644612516282LL;
long long int var_12 = -380997248633761494LL;
unsigned short var_13 = (unsigned short)37717;
unsigned long long int var_15 = 15813584759089384966ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-6900;
void init() {
}

void checksum() {
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
