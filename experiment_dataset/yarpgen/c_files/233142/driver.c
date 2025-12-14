#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1669741369;
int var_3 = -7355731;
unsigned char var_5 = (unsigned char)127;
unsigned char var_7 = (unsigned char)243;
short var_8 = (short)2600;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_16 = (signed char)103;
unsigned long long int var_17 = 951563639443697613ULL;
_Bool var_18 = (_Bool)1;
long long int var_19 = -3551060371876960088LL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
