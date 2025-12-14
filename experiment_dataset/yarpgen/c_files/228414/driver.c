#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
short var_1 = (short)13417;
unsigned long long int var_3 = 1153805621018291140ULL;
unsigned long long int var_6 = 3488561868784374946ULL;
unsigned long long int var_7 = 16979023972405629035ULL;
unsigned char var_8 = (unsigned char)253;
long long int var_9 = 8521144338599736902LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)31584;
unsigned short var_12 = (unsigned short)21229;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
