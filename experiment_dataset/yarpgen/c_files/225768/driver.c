#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)48;
signed char var_7 = (signed char)-73;
long long int var_8 = -5285346573223548699LL;
int var_9 = 1439478002;
int var_10 = -1665558485;
int zero = 0;
int var_11 = 2083249551;
unsigned long long int var_12 = 6181967343657458809ULL;
long long int var_13 = -6334918533479014818LL;
signed char var_14 = (signed char)93;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
