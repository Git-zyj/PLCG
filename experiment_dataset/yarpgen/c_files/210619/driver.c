#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3441805317U;
unsigned int var_5 = 3594172579U;
short var_7 = (short)13441;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 16747530442556939721ULL;
unsigned short var_14 = (unsigned short)42016;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3061393159U;
int zero = 0;
long long int var_19 = -3109989012687780109LL;
unsigned long long int var_20 = 8913532977891756004ULL;
unsigned short var_21 = (unsigned short)13882;
void init() {
}

void checksum() {
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
