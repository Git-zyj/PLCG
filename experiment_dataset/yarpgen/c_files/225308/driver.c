#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-49;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)253;
unsigned int var_9 = 3006303769U;
int zero = 0;
unsigned char var_13 = (unsigned char)228;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 7370081433898986451ULL;
void init() {
}

void checksum() {
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
