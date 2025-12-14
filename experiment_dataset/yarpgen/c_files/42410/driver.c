#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -3450810717933358784LL;
long long int var_9 = 7549782570507117226LL;
int zero = 0;
long long int var_10 = 5237509418096092965LL;
signed char var_11 = (signed char)-124;
signed char var_12 = (signed char)-18;
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
