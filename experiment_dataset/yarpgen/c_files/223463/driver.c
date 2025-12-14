#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -224398668;
int var_8 = -513816568;
unsigned char var_9 = (unsigned char)98;
_Bool var_13 = (_Bool)0;
unsigned char var_16 = (unsigned char)117;
int zero = 0;
unsigned char var_17 = (unsigned char)93;
unsigned long long int var_18 = 11096382330289558879ULL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
