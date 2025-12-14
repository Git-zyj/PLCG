#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)31;
unsigned long long int var_1 = 6680617623602022375ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_11 = 3077196123U;
int zero = 0;
unsigned long long int var_12 = 12954394913820042661ULL;
unsigned long long int var_13 = 506662382379750868ULL;
void init() {
}

void checksum() {
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
