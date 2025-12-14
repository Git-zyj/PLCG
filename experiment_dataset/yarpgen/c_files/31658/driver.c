#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)-79;
_Bool var_10 = (_Bool)0;
long long int var_11 = 7858362976062734437LL;
signed char var_13 = (signed char)-50;
long long int var_14 = 9091083362609469881LL;
signed char var_15 = (signed char)110;
int zero = 0;
unsigned long long int var_18 = 6223746722853339041ULL;
long long int var_19 = 8175097873951506100LL;
signed char var_20 = (signed char)26;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
