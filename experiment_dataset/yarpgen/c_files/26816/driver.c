#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)13;
long long int var_3 = 1755958553319752343LL;
signed char var_4 = (signed char)2;
unsigned long long int var_8 = 18100725783191704305ULL;
int zero = 0;
long long int var_12 = -411062253929599991LL;
unsigned short var_13 = (unsigned short)41111;
int var_14 = -887591251;
int var_15 = -1404468842;
int var_16 = 291372328;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
