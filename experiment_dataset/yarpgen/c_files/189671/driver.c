#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -240816036023055749LL;
signed char var_1 = (signed char)104;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)197;
unsigned int var_4 = 3802830130U;
int zero = 0;
unsigned int var_14 = 1795252050U;
unsigned long long int var_15 = 8129253022502230906ULL;
unsigned int var_16 = 4217547698U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
