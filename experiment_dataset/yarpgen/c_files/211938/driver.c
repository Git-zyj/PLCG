#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1755678703;
unsigned long long int var_3 = 15810048706417471693ULL;
unsigned long long int var_4 = 7925889578378094222ULL;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)3932;
signed char var_11 = (signed char)9;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 13887887962717090163ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
