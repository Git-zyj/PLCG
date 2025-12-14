#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1055397171U;
unsigned long long int var_2 = 6927618575251428284ULL;
unsigned char var_4 = (unsigned char)12;
long long int var_5 = 74884189001114244LL;
int var_8 = -1509011604;
unsigned char var_9 = (unsigned char)13;
signed char var_11 = (signed char)117;
unsigned int var_12 = 114308120U;
_Bool var_15 = (_Bool)1;
unsigned short var_17 = (unsigned short)26057;
int zero = 0;
int var_18 = 2089623449;
unsigned long long int var_19 = 2971342675585730797ULL;
long long int var_20 = 7403519667390064803LL;
unsigned int var_21 = 2747504584U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
