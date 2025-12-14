#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7198784504292700561LL;
unsigned long long int var_3 = 12379883538369346843ULL;
unsigned long long int var_5 = 16239903070818253321ULL;
short var_6 = (short)25423;
long long int var_9 = -5932238157432320302LL;
long long int var_12 = -8995813137365352105LL;
int zero = 0;
long long int var_15 = -1839183580714486784LL;
int var_16 = 1975511785;
unsigned long long int var_17 = 5815950815332763897ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
