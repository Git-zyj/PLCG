#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)238;
unsigned short var_1 = (unsigned short)4864;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)57487;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)44518;
unsigned int var_10 = 1844972293U;
int zero = 0;
unsigned long long int var_11 = 8200030000931737256ULL;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)21242;
int var_14 = 209757840;
unsigned long long int var_15 = 13572096358873071040ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
