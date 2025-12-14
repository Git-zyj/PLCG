#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3605078006U;
_Bool var_4 = (_Bool)1;
int var_7 = 1146966276;
int var_9 = -1427179057;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 462214830U;
unsigned long long int var_12 = 4236149332808351869ULL;
int zero = 0;
short var_13 = (short)32724;
long long int var_14 = 8752922553954789508LL;
int var_15 = 1606107947;
unsigned long long int var_16 = 1726928069443043904ULL;
long long int var_17 = 4466219070950203436LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
