#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)32;
unsigned long long int var_3 = 9460310700019549393ULL;
signed char var_5 = (signed char)95;
signed char var_7 = (signed char)54;
unsigned int var_10 = 61366394U;
int zero = 0;
unsigned long long int var_11 = 10841475478813571961ULL;
int var_12 = -309022282;
void init() {
}

void checksum() {
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
