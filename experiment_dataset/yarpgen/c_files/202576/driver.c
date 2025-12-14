#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13714;
_Bool var_3 = (_Bool)0;
int var_5 = -327034369;
signed char var_6 = (signed char)90;
long long int var_7 = -815028228180748080LL;
unsigned char var_9 = (unsigned char)47;
unsigned long long int var_10 = 11378884742692043301ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)72;
short var_14 = (short)11971;
unsigned int var_15 = 1632550730U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
