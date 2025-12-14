#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5387189194584091627LL;
int var_6 = 1020193347;
unsigned int var_9 = 3987659959U;
short var_12 = (short)-8902;
unsigned int var_14 = 1346680250U;
unsigned char var_15 = (unsigned char)110;
int zero = 0;
unsigned int var_19 = 2573322860U;
long long int var_20 = 1920842832419516422LL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
