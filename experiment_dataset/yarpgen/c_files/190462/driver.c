#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)19079;
int var_5 = -996275144;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 14051337809782622234ULL;
unsigned char var_9 = (unsigned char)239;
long long int var_11 = -1294699811240989090LL;
unsigned int var_13 = 2098991801U;
int zero = 0;
unsigned short var_14 = (unsigned short)21865;
unsigned char var_15 = (unsigned char)74;
int var_16 = 953268692;
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
