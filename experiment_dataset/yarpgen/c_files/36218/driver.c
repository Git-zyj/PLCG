#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 11981404760705959518ULL;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
long long int var_5 = 1105565085957299297LL;
int var_6 = -2081782941;
int var_8 = -1194858581;
long long int var_9 = 8758788554106697794LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 8337190991556679154ULL;
long long int var_12 = -2709670507316358275LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
