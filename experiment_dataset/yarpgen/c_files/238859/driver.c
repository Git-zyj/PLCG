#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)81;
long long int var_3 = 8652315262178295326LL;
short var_4 = (short)26916;
int zero = 0;
int var_17 = 1439895179;
unsigned long long int var_18 = 13082018432759369383ULL;
long long int var_19 = -729911329670935028LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
