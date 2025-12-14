#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2293698625268021141LL;
long long int var_1 = 1358801000673906727LL;
long long int var_2 = -636805048218105145LL;
long long int var_3 = 7313074103476695087LL;
long long int var_4 = -149964483019193828LL;
long long int var_11 = 300417771078742608LL;
unsigned long long int var_13 = 9611750306485309479ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 18396799685073124641ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 12783022255678139684ULL;
long long int var_18 = 1410392907724652854LL;
long long int var_19 = -8576863779459476483LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
