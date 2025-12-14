#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)0;
signed char var_5 = (signed char)48;
int var_8 = -408015316;
unsigned long long int var_9 = 11618981335874588144ULL;
int var_10 = 392463487;
int zero = 0;
unsigned char var_11 = (unsigned char)102;
short var_12 = (short)9189;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
