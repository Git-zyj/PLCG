#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38830;
unsigned long long int var_1 = 2987318617500571510ULL;
long long int var_2 = 1664414828508285129LL;
long long int var_4 = 5985713450153628183LL;
signed char var_5 = (signed char)127;
unsigned int var_6 = 231860304U;
long long int var_9 = 1298514045088902394LL;
unsigned long long int var_10 = 17506611462497976683ULL;
unsigned int var_12 = 1744100756U;
short var_13 = (short)21459;
unsigned int var_15 = 2117657054U;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 180805455U;
int var_19 = -1019295182;
unsigned long long int var_20 = 4579779987281923612ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
