#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10136534718719310970ULL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)17995;
int zero = 0;
unsigned long long int var_13 = 8041599962884703603ULL;
_Bool var_14 = (_Bool)0;
int var_15 = -1243498981;
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
