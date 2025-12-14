#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -9221162928474173088LL;
int var_14 = -312215356;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 10509046643318092443ULL;
unsigned char var_17 = (unsigned char)92;
unsigned char var_18 = (unsigned char)116;
unsigned short var_19 = (unsigned short)63800;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
