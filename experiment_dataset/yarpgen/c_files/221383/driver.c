#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6678392936574703019LL;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 3444146626U;
unsigned int var_9 = 717502143U;
long long int var_10 = -4510434757810926720LL;
long long int var_13 = 7026575025300535371LL;
unsigned int var_14 = 2934170752U;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_19 = 4859636740101190900LL;
_Bool var_20 = (_Bool)0;
long long int var_21 = -5727334988991317221LL;
long long int var_22 = 3395746667752123664LL;
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
