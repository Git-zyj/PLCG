#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2074574822;
unsigned int var_2 = 1121043269U;
int var_4 = 871625359;
int var_5 = -680025459;
unsigned int var_9 = 4017484874U;
unsigned int var_13 = 645704129U;
unsigned int var_15 = 3138307300U;
int zero = 0;
unsigned char var_16 = (unsigned char)243;
unsigned int var_17 = 2054662471U;
unsigned int var_18 = 3993338442U;
void init() {
}

void checksum() {
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
