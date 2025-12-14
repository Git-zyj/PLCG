#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-111;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)0;
long long int var_7 = 6668994205266774469LL;
unsigned int var_9 = 3799601706U;
int zero = 0;
unsigned long long int var_10 = 6028311860057385724ULL;
unsigned char var_11 = (unsigned char)129;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
