#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2085812690U;
int var_1 = -849803560;
_Bool var_2 = (_Bool)1;
int var_3 = -1480108151;
_Bool var_4 = (_Bool)1;
int var_5 = 1342724372;
short var_6 = (short)-29182;
unsigned long long int var_7 = 1933499102620834288ULL;
unsigned long long int var_8 = 12241494914228807415ULL;
short var_9 = (short)7700;
long long int var_10 = -3706449146924962155LL;
unsigned long long int var_11 = 8146190936807283685ULL;
int zero = 0;
unsigned int var_12 = 2521506737U;
int var_13 = 1504609264;
long long int var_14 = 6336186906679912477LL;
void init() {
}

void checksum() {
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
