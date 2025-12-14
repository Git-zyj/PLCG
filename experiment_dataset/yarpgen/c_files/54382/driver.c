#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 691487679254383040LL;
unsigned long long int var_1 = 2109272476807145876ULL;
signed char var_2 = (signed char)122;
long long int var_3 = -2560615914574285617LL;
short var_4 = (short)-8381;
unsigned char var_6 = (unsigned char)177;
long long int var_7 = -8896384901713170944LL;
int var_9 = 1100947999;
int zero = 0;
signed char var_13 = (signed char)3;
int var_14 = 1393458815;
unsigned int var_15 = 770532544U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
