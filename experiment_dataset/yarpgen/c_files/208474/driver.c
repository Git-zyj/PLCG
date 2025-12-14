#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)155;
short var_10 = (short)21773;
unsigned long long int var_12 = 9767357764179927508ULL;
long long int var_13 = -7605821795643044890LL;
int zero = 0;
long long int var_16 = 4102286883090678269LL;
long long int var_17 = -1993030380891769592LL;
unsigned long long int var_18 = 1465752424167328873ULL;
void init() {
}

void checksum() {
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
