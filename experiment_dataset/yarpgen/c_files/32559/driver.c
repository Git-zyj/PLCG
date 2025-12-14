#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5251424791584518218ULL;
unsigned long long int var_3 = 14001587976049625364ULL;
unsigned char var_6 = (unsigned char)4;
int var_10 = -1946931929;
long long int var_11 = 6235597869025240950LL;
long long int var_13 = 4665919333274552447LL;
unsigned long long int var_14 = 5236955988662616922ULL;
int zero = 0;
int var_16 = -1970488708;
short var_17 = (short)28775;
void init() {
}

void checksum() {
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
