#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)31;
signed char var_3 = (signed char)103;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)252;
unsigned long long int var_9 = 5527651386979733646ULL;
unsigned long long int var_11 = 17331829579529723259ULL;
unsigned long long int var_14 = 5258896313223568303ULL;
int zero = 0;
signed char var_15 = (signed char)104;
unsigned char var_16 = (unsigned char)227;
long long int var_17 = 5531899657217336620LL;
int var_18 = 149162716;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
