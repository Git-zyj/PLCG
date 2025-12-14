#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -341506044;
unsigned long long int var_1 = 15678808566666552878ULL;
long long int var_2 = 8000594315872281570LL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 11935790072364530762ULL;
int var_6 = -724398771;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 2555641782U;
unsigned int var_15 = 2653133888U;
signed char var_16 = (signed char)70;
signed char var_17 = (signed char)7;
signed char var_18 = (signed char)76;
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
