#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25933;
short var_1 = (short)-7121;
unsigned long long int var_7 = 2189697692691149776ULL;
unsigned long long int var_8 = 2583114706068780725ULL;
short var_9 = (short)16706;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 8560155063496747600ULL;
unsigned long long int var_12 = 13217347639113927349ULL;
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
