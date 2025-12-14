#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5394690499654380403LL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 16020210749539054847ULL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
long long int var_9 = 6420940944833515672LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = 2959556828706934994LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 6083921130428625895LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
