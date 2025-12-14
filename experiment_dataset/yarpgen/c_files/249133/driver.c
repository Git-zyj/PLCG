#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 120742245;
short var_7 = (short)-20347;
long long int var_9 = -4346849103248173725LL;
unsigned int var_10 = 1683138259U;
int zero = 0;
unsigned char var_18 = (unsigned char)83;
unsigned short var_19 = (unsigned short)33582;
int var_20 = 1383262068;
unsigned long long int var_21 = 18445019788132978125ULL;
int var_22 = -850087101;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
