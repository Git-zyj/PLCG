#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)1;
int var_5 = 920656040;
long long int var_9 = 1719964467514391146LL;
long long int var_10 = 5908519389949576882LL;
signed char var_11 = (signed char)90;
int var_12 = -1127049208;
unsigned long long int var_15 = 14083519677703875660ULL;
int zero = 0;
long long int var_19 = -7891640335421191992LL;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 9774368811208973899ULL;
void init() {
}

void checksum() {
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
