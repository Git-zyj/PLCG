#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)251;
unsigned long long int var_3 = 2612888943828679598ULL;
long long int var_4 = -7514105326467322244LL;
unsigned char var_5 = (unsigned char)112;
signed char var_8 = (signed char)-117;
int var_9 = -165419278;
int zero = 0;
long long int var_10 = -3465485359543306966LL;
unsigned char var_11 = (unsigned char)155;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
