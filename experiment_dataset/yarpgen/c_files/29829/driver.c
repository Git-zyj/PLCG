#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)34;
unsigned int var_5 = 3655996659U;
unsigned int var_9 = 2332535050U;
unsigned short var_11 = (unsigned short)60530;
unsigned long long int var_12 = 13527531949052551817ULL;
unsigned long long int var_17 = 17997113906481763735ULL;
int zero = 0;
unsigned int var_19 = 1545352020U;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
