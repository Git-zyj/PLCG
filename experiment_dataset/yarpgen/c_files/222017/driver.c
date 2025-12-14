#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)4;
unsigned long long int var_3 = 8688769035327941444ULL;
unsigned short var_6 = (unsigned short)21931;
unsigned long long int var_11 = 17447634886138211912ULL;
short var_12 = (short)18501;
int var_14 = -174603184;
int var_15 = -484560627;
int zero = 0;
unsigned long long int var_17 = 7025023804190216572ULL;
short var_18 = (short)4891;
unsigned long long int var_19 = 14520244717419043310ULL;
long long int var_20 = -3597745494463285683LL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
