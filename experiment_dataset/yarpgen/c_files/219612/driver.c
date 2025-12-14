#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6793469129095359305LL;
long long int var_6 = 300642380369873914LL;
int zero = 0;
int var_19 = -231353892;
short var_20 = (short)10260;
short var_21 = (short)32713;
long long int var_22 = 4150672577574687391LL;
unsigned long long int var_23 = 756818421525559481ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
