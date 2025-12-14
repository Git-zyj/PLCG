#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3865498777205909058LL;
unsigned int var_3 = 1361017784U;
unsigned short var_4 = (unsigned short)29199;
long long int var_6 = 7455250373355654890LL;
signed char var_9 = (signed char)96;
unsigned int var_10 = 2165367042U;
short var_13 = (short)-24;
long long int var_15 = 6862661734406051867LL;
unsigned long long int var_17 = 18201815277713014391ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)5289;
unsigned int var_19 = 1248209393U;
unsigned int var_20 = 2994910135U;
void init() {
}

void checksum() {
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
