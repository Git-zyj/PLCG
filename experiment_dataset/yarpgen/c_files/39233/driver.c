#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15265361873894111177ULL;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)253;
unsigned char var_6 = (unsigned char)144;
long long int var_12 = -4597285724418983466LL;
int zero = 0;
long long int var_15 = 5216664883601832936LL;
unsigned int var_16 = 3182799324U;
long long int var_17 = -6077034046442907349LL;
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
