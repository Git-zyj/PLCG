#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 544945322;
long long int var_4 = 2953566024721501454LL;
unsigned int var_7 = 1123477289U;
long long int var_9 = 8572127832096991227LL;
unsigned int var_12 = 72500792U;
unsigned long long int var_14 = 3483948627870363739ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)78;
void init() {
}

void checksum() {
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
