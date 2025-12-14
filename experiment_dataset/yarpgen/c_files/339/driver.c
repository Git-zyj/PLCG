#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5282530665353535218ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_10 = 7272422324283020960ULL;
_Bool var_11 = (_Bool)0;
long long int var_13 = -5995024688050617223LL;
int zero = 0;
unsigned long long int var_17 = 2612323438693856061ULL;
unsigned short var_18 = (unsigned short)28412;
int var_19 = -796223569;
unsigned long long int var_20 = 6862772506488116910ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
