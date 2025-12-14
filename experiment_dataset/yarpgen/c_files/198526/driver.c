#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26147;
int var_1 = 1293073415;
long long int var_6 = 1261957159309786201LL;
short var_9 = (short)32593;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 4141412596U;
long long int var_15 = -8583652991846079033LL;
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
