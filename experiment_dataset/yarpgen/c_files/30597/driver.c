#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 394160661859429241ULL;
unsigned int var_7 = 3313243354U;
short var_11 = (short)28956;
unsigned long long int var_16 = 17930045792959964272ULL;
long long int var_18 = 5257244393183369763LL;
int zero = 0;
unsigned int var_19 = 1743411203U;
unsigned long long int var_20 = 15549295592808885809ULL;
unsigned short var_21 = (unsigned short)31708;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
