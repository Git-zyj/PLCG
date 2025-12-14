#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)127;
signed char var_4 = (signed char)-119;
unsigned short var_5 = (unsigned short)18015;
int var_6 = -851064529;
_Bool var_10 = (_Bool)1;
long long int var_13 = 3516026762987577671LL;
int zero = 0;
unsigned char var_14 = (unsigned char)21;
unsigned short var_15 = (unsigned short)51011;
signed char var_16 = (signed char)121;
unsigned char var_17 = (unsigned char)17;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
