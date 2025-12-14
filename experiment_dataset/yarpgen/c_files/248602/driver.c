#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 11627287327264547485ULL;
long long int var_4 = -6138518038495464563LL;
int var_5 = -1966128922;
signed char var_8 = (signed char)-24;
unsigned long long int var_16 = 16252043806115997481ULL;
int zero = 0;
unsigned long long int var_17 = 4164941288875701957ULL;
unsigned int var_18 = 4168176470U;
unsigned int var_19 = 3421676987U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
