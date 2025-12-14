#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13739;
unsigned int var_2 = 2464793487U;
unsigned long long int var_4 = 3173485669367543230ULL;
unsigned char var_10 = (unsigned char)214;
int zero = 0;
unsigned long long int var_11 = 4208515028418846201ULL;
short var_12 = (short)-8061;
long long int var_13 = 5722625173154378536LL;
long long int var_14 = 128675135831944013LL;
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
