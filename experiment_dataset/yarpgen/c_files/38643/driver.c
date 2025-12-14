#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 13565922293239277456ULL;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 7196489589043039723ULL;
int var_21 = -1959801967;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
