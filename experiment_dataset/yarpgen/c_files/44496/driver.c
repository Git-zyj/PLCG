#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-32732;
int var_8 = 1872148278;
int var_11 = 1962329355;
unsigned long long int var_13 = 10689961822953795174ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)229;
long long int var_16 = -5131255476553715367LL;
unsigned long long int var_17 = 9289766596946048016ULL;
unsigned short var_18 = (unsigned short)59500;
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
