#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12353879707838106482ULL;
unsigned long long int var_8 = 8084619339716707911ULL;
long long int var_9 = -1943900052109114875LL;
unsigned long long int var_11 = 5846971141618920041ULL;
int var_15 = -1701895663;
int zero = 0;
unsigned int var_16 = 1090328873U;
long long int var_17 = -8496552536203643681LL;
int var_18 = -1786888434;
unsigned char var_19 = (unsigned char)191;
unsigned char var_20 = (unsigned char)38;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
