#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6334117406631950358ULL;
unsigned long long int var_4 = 4066867179849354525ULL;
unsigned int var_5 = 3674943227U;
int var_10 = -665733324;
int zero = 0;
unsigned long long int var_14 = 953092342907843672ULL;
long long int var_15 = 8616381991569469378LL;
unsigned long long int var_16 = 7464562539681595578ULL;
unsigned int var_17 = 4152030897U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
