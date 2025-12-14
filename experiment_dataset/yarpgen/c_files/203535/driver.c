#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -1355988274318731135LL;
unsigned int var_8 = 3148273946U;
unsigned short var_9 = (unsigned short)54597;
long long int var_10 = 6428880735965158703LL;
unsigned char var_12 = (unsigned char)247;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 1729541992U;
unsigned char var_21 = (unsigned char)100;
unsigned char var_22 = (unsigned char)221;
unsigned int var_23 = 3882838926U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
