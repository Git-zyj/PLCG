#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-56;
long long int var_8 = -25742373499293824LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)104;
unsigned long long int var_14 = 1455817266166929223ULL;
long long int var_15 = 1839976735400266171LL;
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
