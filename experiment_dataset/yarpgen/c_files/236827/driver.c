#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1052747526;
unsigned short var_9 = (unsigned short)18219;
unsigned int var_11 = 175816931U;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 887836060U;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 8411652581955713793ULL;
void init() {
}

void checksum() {
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
