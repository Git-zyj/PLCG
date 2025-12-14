#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12625029120806319767ULL;
_Bool var_1 = (_Bool)0;
unsigned int var_6 = 2961889533U;
long long int var_11 = -3558818969882860416LL;
long long int var_12 = -6540252540866809772LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)199;
unsigned int var_16 = 1392535864U;
unsigned int var_17 = 4122779418U;
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
