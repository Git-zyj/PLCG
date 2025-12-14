#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -348497646;
unsigned long long int var_6 = 17592916780442371914ULL;
int var_10 = -1324792104;
unsigned short var_11 = (unsigned short)37195;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)72;
unsigned short var_16 = (unsigned short)44420;
void init() {
}

void checksum() {
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
