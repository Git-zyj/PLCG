#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1033293656351090205LL;
signed char var_4 = (signed char)-84;
short var_7 = (short)17143;
long long int var_8 = 8499435805581373920LL;
unsigned short var_9 = (unsigned short)54495;
long long int var_12 = -1528379778069117937LL;
long long int var_13 = 2153644223855532638LL;
unsigned int var_14 = 3652376587U;
long long int var_15 = -6574811625555996742LL;
long long int var_17 = 4866220406438596963LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 10032950282101187172ULL;
int var_22 = 2034211172;
unsigned long long int var_23 = 12162807364057077523ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
