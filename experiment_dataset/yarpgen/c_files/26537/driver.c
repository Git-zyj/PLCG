#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 867079090U;
unsigned long long int var_9 = 13634545541883595789ULL;
long long int var_10 = 705366478704525938LL;
unsigned int var_11 = 3035111418U;
signed char var_14 = (signed char)-13;
unsigned long long int var_16 = 4986747900568513536ULL;
int zero = 0;
int var_19 = 1667407748;
signed char var_20 = (signed char)27;
signed char var_21 = (signed char)-21;
unsigned long long int var_22 = 12587143455776825556ULL;
unsigned long long int var_23 = 12017862377436180184ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
