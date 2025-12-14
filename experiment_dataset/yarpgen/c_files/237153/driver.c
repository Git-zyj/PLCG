#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
int var_5 = -646253987;
short var_7 = (short)-5914;
unsigned short var_8 = (unsigned short)3138;
long long int var_13 = -7159445769732901074LL;
unsigned short var_15 = (unsigned short)9151;
int zero = 0;
unsigned short var_17 = (unsigned short)57782;
int var_18 = 652098111;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
long long int var_21 = -892002486965798962LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
