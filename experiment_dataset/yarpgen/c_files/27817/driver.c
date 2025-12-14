#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6197310755527459992LL;
long long int var_1 = 5089747843084522408LL;
int var_2 = -1512148074;
int var_3 = 1134961197;
int var_4 = 1374640885;
int zero = 0;
long long int var_12 = -6996180149918788831LL;
signed char var_13 = (signed char)-85;
unsigned int var_14 = 2285231506U;
int var_15 = 1244634783;
signed char var_16 = (signed char)-3;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
