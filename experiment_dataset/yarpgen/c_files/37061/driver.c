#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)113;
unsigned long long int var_1 = 12365869872846569055ULL;
unsigned long long int var_2 = 2589802925377237427ULL;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 1474911443U;
short var_9 = (short)-21561;
unsigned short var_10 = (unsigned short)4018;
short var_11 = (short)-24706;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 17379886449788709402ULL;
short var_16 = (short)9569;
_Bool var_17 = (_Bool)1;
int var_18 = -650073090;
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
