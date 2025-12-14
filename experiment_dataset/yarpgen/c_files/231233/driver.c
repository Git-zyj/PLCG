#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7009841108422878111ULL;
unsigned long long int var_11 = 5718864086279522779ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -905281881;
unsigned long long int var_22 = 1131338549781826410ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
