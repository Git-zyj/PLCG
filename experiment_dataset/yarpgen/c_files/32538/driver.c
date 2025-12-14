#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1256116037;
unsigned int var_1 = 2791097721U;
unsigned char var_3 = (unsigned char)156;
unsigned int var_10 = 1354771089U;
int var_14 = -542020886;
int zero = 0;
long long int var_20 = 6602416792744029168LL;
long long int var_21 = -3586983626187563639LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
