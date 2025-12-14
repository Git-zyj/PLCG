#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 208280219;
unsigned long long int var_10 = 2829605152293481711ULL;
unsigned int var_12 = 2768577824U;
unsigned int var_14 = 382282902U;
int zero = 0;
int var_15 = -1044388668;
signed char var_16 = (signed char)-33;
long long int var_17 = -483720239186527784LL;
unsigned short var_18 = (unsigned short)4226;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
