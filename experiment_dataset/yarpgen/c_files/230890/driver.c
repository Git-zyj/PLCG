#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3785438654633839992ULL;
int var_4 = -1399123529;
unsigned short var_10 = (unsigned short)5079;
int zero = 0;
unsigned char var_13 = (unsigned char)191;
unsigned long long int var_14 = 17679524028200150643ULL;
long long int var_15 = -138415360186603136LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
