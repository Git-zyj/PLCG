#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)37871;
unsigned short var_4 = (unsigned short)34556;
unsigned long long int var_8 = 8755645865608700176ULL;
long long int var_12 = -8731878898174143337LL;
int zero = 0;
int var_15 = -590714645;
unsigned long long int var_16 = 10496145517625372512ULL;
unsigned long long int var_17 = 10169623231251698947ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
