#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)43308;
long long int var_7 = -93988888654398441LL;
short var_8 = (short)18491;
unsigned char var_11 = (unsigned char)122;
_Bool var_15 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)27626;
unsigned char var_21 = (unsigned char)231;
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
