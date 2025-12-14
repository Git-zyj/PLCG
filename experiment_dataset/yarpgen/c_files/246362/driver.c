#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)21425;
_Bool var_9 = (_Bool)1;
signed char var_16 = (signed char)17;
int zero = 0;
unsigned long long int var_20 = 10695554813892218364ULL;
unsigned long long int var_21 = 8266233808022270932ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
