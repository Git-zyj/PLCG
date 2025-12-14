#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2477974425889684645LL;
long long int var_2 = 3113490891427182721LL;
long long int var_5 = -9009628687041941210LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)17;
unsigned short var_16 = (unsigned short)3042;
signed char var_17 = (signed char)103;
long long int var_18 = 4403328134019634690LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
