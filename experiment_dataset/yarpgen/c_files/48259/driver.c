#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-8756;
int var_5 = -446411302;
unsigned long long int var_7 = 8566094177816609530ULL;
int var_11 = -979414604;
int zero = 0;
long long int var_14 = 6652900891455293660LL;
signed char var_15 = (signed char)120;
void init() {
}

void checksum() {
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
