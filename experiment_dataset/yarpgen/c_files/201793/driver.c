#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3371592051092472790LL;
unsigned long long int var_1 = 13765702708702174982ULL;
signed char var_3 = (signed char)112;
unsigned char var_5 = (unsigned char)212;
unsigned char var_7 = (unsigned char)230;
signed char var_9 = (signed char)-26;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 593226566098674190LL;
int var_15 = 846520704;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
