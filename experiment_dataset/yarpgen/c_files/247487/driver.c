#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)44;
int var_6 = -872396354;
unsigned int var_7 = 2401778133U;
int var_9 = -1889741297;
int var_13 = 1452055988;
unsigned char var_16 = (unsigned char)164;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2157370574U;
unsigned long long int var_20 = 15920597119950545750ULL;
signed char var_21 = (signed char)113;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
