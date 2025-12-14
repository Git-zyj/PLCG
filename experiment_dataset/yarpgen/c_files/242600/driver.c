#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 562469417334168066ULL;
long long int var_5 = 8951139856912197743LL;
unsigned long long int var_6 = 5043227345374712830ULL;
_Bool var_7 = (_Bool)1;
short var_8 = (short)19712;
unsigned long long int var_9 = 6666222693533575501ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)106;
unsigned long long int var_20 = 12932217320454031093ULL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
