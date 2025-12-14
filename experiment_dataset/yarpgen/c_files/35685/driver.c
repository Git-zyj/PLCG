#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3163953809178647456ULL;
signed char var_9 = (signed char)-97;
int zero = 0;
long long int var_10 = 828969377930464293LL;
unsigned char var_11 = (unsigned char)216;
long long int var_12 = -1571964014993901995LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
