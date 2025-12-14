#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2772669800871358944LL;
long long int var_3 = 1565268632931460691LL;
int var_9 = -935992600;
unsigned short var_15 = (unsigned short)26528;
signed char var_18 = (signed char)108;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = 2439699826164701099LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
