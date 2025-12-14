#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7862039321362746871ULL;
unsigned long long int var_4 = 11335746651564733484ULL;
unsigned char var_7 = (unsigned char)109;
int var_8 = 2074034576;
unsigned int var_10 = 3249066944U;
int var_12 = -592561191;
long long int var_15 = -8831998648271643343LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3233194171U;
void init() {
}

void checksum() {
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
