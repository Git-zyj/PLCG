#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)38176;
_Bool var_6 = (_Bool)0;
int var_8 = -462555256;
short var_9 = (short)1331;
int zero = 0;
unsigned char var_10 = (unsigned char)69;
unsigned char var_11 = (unsigned char)186;
int var_12 = 1067163598;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
