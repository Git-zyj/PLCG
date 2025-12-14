#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9944042847737775702ULL;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)1984;
unsigned long long int var_5 = 13547450602591642334ULL;
long long int var_6 = 8382408449719979101LL;
unsigned long long int var_7 = 10791123791631440152ULL;
unsigned char var_8 = (unsigned char)241;
unsigned long long int var_9 = 16165837157434653416ULL;
long long int var_10 = 2344721772568672758LL;
int zero = 0;
short var_12 = (short)-9059;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-17566;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
