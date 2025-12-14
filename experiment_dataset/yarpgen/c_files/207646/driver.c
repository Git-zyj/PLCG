#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5264610566313467827LL;
unsigned short var_3 = (unsigned short)13200;
_Bool var_5 = (_Bool)0;
long long int var_10 = 92235797900874680LL;
int zero = 0;
unsigned int var_11 = 2897270876U;
int var_12 = -1971129615;
short var_13 = (short)-21638;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
