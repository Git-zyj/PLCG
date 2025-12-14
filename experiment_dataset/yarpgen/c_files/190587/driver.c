#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 79818416U;
long long int var_3 = -8994093089211399877LL;
int var_5 = -873333193;
int var_7 = 718120846;
int var_9 = -1499456774;
short var_10 = (short)31958;
int zero = 0;
unsigned int var_14 = 560561429U;
long long int var_15 = 4811160015918544219LL;
int var_16 = 1807988993;
unsigned short var_17 = (unsigned short)57271;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
