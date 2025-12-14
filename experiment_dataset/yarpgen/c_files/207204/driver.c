#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13731675871155970917ULL;
int var_1 = -1596280461;
short var_3 = (short)11350;
unsigned char var_4 = (unsigned char)173;
unsigned int var_5 = 3046543211U;
int var_9 = -501979505;
unsigned short var_11 = (unsigned short)16765;
unsigned long long int var_13 = 8296299388443064244ULL;
signed char var_15 = (signed char)16;
unsigned long long int var_19 = 10168017221203129302ULL;
int zero = 0;
unsigned long long int var_20 = 1996019447910605920ULL;
long long int var_21 = -7449347671472004992LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
