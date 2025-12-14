#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13445913496011054018ULL;
int var_1 = -887774982;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)54;
unsigned long long int var_7 = 9708297960330092100ULL;
long long int var_11 = 1623538580561034927LL;
unsigned char var_13 = (unsigned char)75;
int zero = 0;
unsigned long long int var_19 = 11272767967071724294ULL;
unsigned short var_20 = (unsigned short)38271;
long long int var_21 = -8194034069899982092LL;
long long int var_22 = -3019122182781043525LL;
int var_23 = 323178787;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
