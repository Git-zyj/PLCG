#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20965;
long long int var_2 = 5566595209662105081LL;
unsigned char var_3 = (unsigned char)194;
unsigned short var_4 = (unsigned short)15520;
unsigned long long int var_5 = 10416707864863872037ULL;
unsigned int var_7 = 3461265354U;
int var_8 = 1928193303;
long long int var_9 = -5717895566254932915LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)29277;
unsigned int var_14 = 688316597U;
_Bool var_15 = (_Bool)0;
long long int var_16 = -3166796693837802095LL;
int var_17 = 1401657647;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
