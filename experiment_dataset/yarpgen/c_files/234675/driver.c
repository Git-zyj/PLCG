#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4740711476813539938LL;
unsigned long long int var_8 = 5192705615775995221ULL;
long long int var_10 = -4679554807438031893LL;
unsigned int var_11 = 4259364486U;
long long int var_13 = 8899525646545124455LL;
short var_14 = (short)-16680;
int zero = 0;
unsigned long long int var_15 = 7886487800431854475ULL;
unsigned long long int var_16 = 9632414566202126252ULL;
void init() {
}

void checksum() {
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
