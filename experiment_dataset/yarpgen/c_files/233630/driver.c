#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1389095218;
long long int var_7 = 5236012566266726128LL;
long long int var_8 = 1584139514813610938LL;
int zero = 0;
int var_11 = 1726666680;
unsigned long long int var_12 = 7289295582628687262ULL;
unsigned long long int var_13 = 8718882659160027122ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
