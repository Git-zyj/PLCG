#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)20019;
long long int var_3 = -2573595817044576685LL;
unsigned short var_9 = (unsigned short)5090;
int zero = 0;
unsigned long long int var_11 = 17103403763103383183ULL;
unsigned long long int var_12 = 17121118337047899778ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
