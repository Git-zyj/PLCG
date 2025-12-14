#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 6057075246252454319ULL;
unsigned char var_8 = (unsigned char)148;
signed char var_10 = (signed char)-117;
unsigned long long int var_11 = 13572939274277630059ULL;
unsigned long long int var_13 = 13193022012848182078ULL;
unsigned int var_16 = 3943716891U;
unsigned long long int var_17 = 15937375398910079903ULL;
int zero = 0;
unsigned int var_18 = 1239747303U;
int var_19 = -100541442;
long long int var_20 = 1102824947152453807LL;
void init() {
}

void checksum() {
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
