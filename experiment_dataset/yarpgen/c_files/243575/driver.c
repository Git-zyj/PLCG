#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 539954607U;
signed char var_5 = (signed char)-48;
unsigned long long int var_7 = 10391673193913957365ULL;
signed char var_8 = (signed char)126;
unsigned long long int var_10 = 11549708456652469223ULL;
unsigned char var_12 = (unsigned char)240;
int var_15 = 1640299022;
int zero = 0;
signed char var_16 = (signed char)118;
signed char var_17 = (signed char)-108;
unsigned char var_18 = (unsigned char)214;
signed char var_19 = (signed char)-49;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
