#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)3;
_Bool var_1 = (_Bool)0;
short var_4 = (short)-29802;
unsigned long long int var_6 = 18444769813887773596ULL;
long long int var_10 = 8377183767152646649LL;
int zero = 0;
unsigned long long int var_16 = 6762858825105374139ULL;
short var_17 = (short)-13236;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
