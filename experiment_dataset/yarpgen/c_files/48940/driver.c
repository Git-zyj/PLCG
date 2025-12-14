#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13422301306152764966ULL;
signed char var_2 = (signed char)67;
unsigned long long int var_4 = 7158612290624706211ULL;
unsigned short var_6 = (unsigned short)23620;
long long int var_7 = 1113038777869751145LL;
long long int var_8 = 4806331675592687076LL;
unsigned char var_9 = (unsigned char)243;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1567831382U;
signed char var_13 = (signed char)-68;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
