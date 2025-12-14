#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 1937255826275057743LL;
int var_3 = -1919599004;
unsigned long long int var_7 = 3699415825402291237ULL;
short var_9 = (short)11253;
int var_13 = 1722794041;
unsigned long long int var_17 = 12676322977671574701ULL;
int zero = 0;
unsigned int var_18 = 3425312152U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
