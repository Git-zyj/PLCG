#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)14797;
long long int var_5 = 5368935870115725227LL;
_Bool var_7 = (_Bool)0;
int var_8 = -1429859103;
unsigned short var_11 = (unsigned short)20399;
int zero = 0;
signed char var_14 = (signed char)-17;
long long int var_15 = -3796287642013235826LL;
unsigned char var_16 = (unsigned char)71;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
