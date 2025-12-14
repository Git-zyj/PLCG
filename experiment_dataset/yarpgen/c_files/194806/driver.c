#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2808794454U;
unsigned short var_1 = (unsigned short)5323;
_Bool var_2 = (_Bool)0;
unsigned long long int var_6 = 4302588506768620162ULL;
short var_8 = (short)20919;
long long int var_9 = -3542039834010056404LL;
unsigned long long int var_10 = 15017696961906531119ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)179;
unsigned int var_14 = 3166114040U;
unsigned int var_15 = 2409340409U;
unsigned char var_16 = (unsigned char)239;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
