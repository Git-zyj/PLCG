#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1605648855;
unsigned char var_5 = (unsigned char)47;
unsigned long long int var_12 = 7326538108009315144ULL;
int zero = 0;
unsigned long long int var_14 = 6406877775112065234ULL;
unsigned long long int var_15 = 10884742080374741934ULL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 17311813108443702548ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
