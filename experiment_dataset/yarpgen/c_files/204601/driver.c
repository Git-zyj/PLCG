#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2849931650832579497LL;
long long int var_3 = 6566849339023179610LL;
unsigned short var_6 = (unsigned short)60176;
unsigned short var_7 = (unsigned short)34620;
int zero = 0;
unsigned short var_11 = (unsigned short)23203;
unsigned short var_12 = (unsigned short)11008;
long long int var_13 = 6726724677193221280LL;
long long int var_14 = 5421489659087800804LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
