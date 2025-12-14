#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 4848174049427085090ULL;
unsigned long long int var_10 = 18330474714535380795ULL;
unsigned char var_14 = (unsigned char)20;
int zero = 0;
unsigned char var_15 = (unsigned char)93;
unsigned char var_16 = (unsigned char)167;
unsigned char var_17 = (unsigned char)173;
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
