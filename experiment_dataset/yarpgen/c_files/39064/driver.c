#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3695697332758680910LL;
unsigned short var_3 = (unsigned short)5248;
unsigned short var_5 = (unsigned short)23867;
unsigned short var_6 = (unsigned short)43076;
int zero = 0;
long long int var_10 = 4173587986043323494LL;
unsigned short var_11 = (unsigned short)60679;
long long int var_12 = -9136759018478251943LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
