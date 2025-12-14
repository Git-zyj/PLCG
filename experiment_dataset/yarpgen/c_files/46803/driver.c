#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-10303;
long long int var_5 = 9177787850219930825LL;
unsigned char var_6 = (unsigned char)61;
int var_9 = 1078948725;
unsigned long long int var_10 = 2568440069573404558ULL;
unsigned long long int var_11 = 5244167386484961833ULL;
unsigned long long int var_12 = 299204734476317087ULL;
int zero = 0;
unsigned long long int var_13 = 2090621853408554913ULL;
unsigned long long int var_14 = 10451742501789526344ULL;
long long int var_15 = -7226500545096784575LL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 12733421748456704960ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
