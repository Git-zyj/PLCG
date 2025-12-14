#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2832392412U;
unsigned int var_1 = 1085493642U;
long long int var_2 = -3011820585115865874LL;
long long int var_3 = 3215763452400112594LL;
_Bool var_4 = (_Bool)0;
int var_5 = -1324991482;
unsigned char var_6 = (unsigned char)1;
unsigned int var_7 = 204017884U;
long long int var_8 = 6129980996135191947LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned short var_10 = (unsigned short)20301;
unsigned short var_11 = (unsigned short)14065;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
