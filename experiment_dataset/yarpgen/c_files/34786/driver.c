#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 629311121725039390LL;
unsigned long long int var_2 = 5904315007950724615ULL;
int var_3 = -1851568121;
short var_4 = (short)5416;
unsigned int var_6 = 582566369U;
unsigned int var_7 = 4091359899U;
unsigned char var_8 = (unsigned char)126;
signed char var_9 = (signed char)60;
unsigned long long int var_10 = 13743796636516070130ULL;
unsigned long long int var_11 = 4585106724440843584ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)19;
unsigned char var_13 = (unsigned char)69;
long long int var_14 = 2740575768577305802LL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
