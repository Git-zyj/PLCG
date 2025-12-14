#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7326362067502263928LL;
long long int var_7 = -1190731009224533436LL;
unsigned int var_10 = 2784984220U;
int zero = 0;
long long int var_13 = 1262698442387884750LL;
unsigned int var_14 = 1081794360U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
