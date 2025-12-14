#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1922480887U;
unsigned long long int var_9 = 4246780542401433800ULL;
unsigned long long int var_11 = 6544662327773090361ULL;
unsigned long long int var_12 = 11535176785547267221ULL;
int zero = 0;
unsigned long long int var_13 = 3980669594338708731ULL;
unsigned char var_14 = (unsigned char)36;
signed char var_15 = (signed char)22;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
