#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_3 = (unsigned char)31;
unsigned long long int var_4 = 16074227185631285292ULL;
long long int var_5 = 7534755581858939400LL;
unsigned int var_6 = 2571245474U;
unsigned long long int var_7 = 11687626121012539943ULL;
unsigned long long int var_8 = 1456182632851279231ULL;
unsigned long long int var_10 = 1685714597800900885ULL;
int zero = 0;
int var_13 = 1811941519;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 128229987U;
unsigned long long int var_16 = 15072651402263656223ULL;
unsigned long long int var_17 = 18262225451786564399ULL;
signed char var_18 = (signed char)-49;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
