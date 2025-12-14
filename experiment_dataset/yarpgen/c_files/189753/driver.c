#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1638524369431052931LL;
unsigned char var_3 = (unsigned char)90;
unsigned short var_4 = (unsigned short)56996;
long long int var_6 = -2298172093811288963LL;
unsigned long long int var_7 = 10207831640066013597ULL;
_Bool var_8 = (_Bool)1;
int var_9 = -620357602;
int var_11 = -1771727081;
int zero = 0;
unsigned long long int var_13 = 3822091409186987681ULL;
long long int var_14 = -8875280180536580447LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
