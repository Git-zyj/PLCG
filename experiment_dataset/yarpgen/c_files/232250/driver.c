#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1871381988876124537ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 3195251762849911356ULL;
long long int var_9 = 4538748476940503831LL;
unsigned long long int var_12 = 7717505493610233471ULL;
long long int var_13 = -8878647980999274510LL;
int var_15 = -1025908488;
int var_17 = -141334404;
unsigned char var_18 = (unsigned char)152;
unsigned char var_19 = (unsigned char)105;
int zero = 0;
signed char var_20 = (signed char)81;
int var_21 = -934988907;
int var_22 = 56967559;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
