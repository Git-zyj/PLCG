#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4759211171466341890LL;
unsigned short var_4 = (unsigned short)22547;
long long int var_6 = 6914015674059779748LL;
long long int var_11 = 7002504381457237289LL;
int zero = 0;
int var_12 = 428324573;
unsigned short var_13 = (unsigned short)16622;
short var_14 = (short)6527;
void init() {
}

void checksum() {
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
