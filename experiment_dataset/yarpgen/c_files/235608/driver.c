#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5500472325892363031LL;
unsigned short var_5 = (unsigned short)14762;
unsigned long long int var_6 = 8766231332515442283ULL;
long long int var_7 = 1447851238066844471LL;
unsigned long long int var_8 = 13934972663679133970ULL;
_Bool var_9 = (_Bool)1;
short var_10 = (short)8595;
signed char var_12 = (signed char)-40;
short var_14 = (short)9357;
unsigned long long int var_16 = 3288463487387217023ULL;
int zero = 0;
unsigned long long int var_20 = 11318957060108674055ULL;
signed char var_21 = (signed char)125;
short var_22 = (short)25538;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 4961026675995761461ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
