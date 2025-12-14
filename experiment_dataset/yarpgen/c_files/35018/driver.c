#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1664232394133446185LL;
unsigned int var_5 = 1990111626U;
short var_6 = (short)2620;
unsigned long long int var_11 = 15911502965285409527ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_16 = 1049985056409252611LL;
signed char var_17 = (signed char)57;
unsigned long long int var_18 = 14706349355315841060ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
