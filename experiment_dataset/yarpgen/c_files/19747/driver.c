#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8647776545895504421LL;
signed char var_4 = (signed char)108;
unsigned long long int var_6 = 349591536003563400ULL;
short var_8 = (short)16415;
unsigned long long int var_14 = 13330923529130955359ULL;
int zero = 0;
long long int var_17 = -7683213493185078744LL;
int var_18 = 1346710489;
void init() {
}

void checksum() {
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
