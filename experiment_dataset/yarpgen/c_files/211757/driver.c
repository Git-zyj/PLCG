#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9018572510648753730ULL;
long long int var_9 = -747256719536797391LL;
long long int var_10 = -7738202070493022155LL;
int zero = 0;
unsigned short var_20 = (unsigned short)16026;
long long int var_21 = 660520896526501735LL;
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
