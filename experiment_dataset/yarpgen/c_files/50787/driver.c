#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1659940943;
signed char var_7 = (signed char)-9;
int var_12 = -1190069404;
unsigned int var_13 = 936082593U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)135;
signed char var_18 = (signed char)109;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3881663220U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
