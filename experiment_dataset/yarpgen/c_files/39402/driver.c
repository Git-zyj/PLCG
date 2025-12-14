#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -408009526;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 5282680313880928052ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)136;
int var_12 = -1315145502;
signed char var_13 = (signed char)89;
unsigned long long int var_14 = 9223417189589010152ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
