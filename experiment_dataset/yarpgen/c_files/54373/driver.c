#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5710522067113179964LL;
long long int var_1 = -1163668317488124559LL;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)126;
unsigned int var_4 = 2131041743U;
_Bool var_5 = (_Bool)0;
long long int var_8 = 8851680416860397684LL;
long long int var_9 = 7929991478271197049LL;
long long int var_10 = 7433370318605560027LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 13707079574863634427ULL;
long long int var_14 = -1560359697908145346LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
