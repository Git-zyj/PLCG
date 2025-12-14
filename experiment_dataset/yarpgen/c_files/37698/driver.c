#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3095149200910143535LL;
long long int var_5 = 7608616790983102182LL;
unsigned char var_10 = (unsigned char)234;
int zero = 0;
unsigned long long int var_13 = 5643964562267218887ULL;
signed char var_14 = (signed char)9;
long long int var_15 = -6042496170243116488LL;
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
