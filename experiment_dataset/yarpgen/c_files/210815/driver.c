#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12114024335627148102ULL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 17709085334109967026ULL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 6059463172526254729ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
