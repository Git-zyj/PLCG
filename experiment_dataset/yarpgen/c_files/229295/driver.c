#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)66;
unsigned long long int var_3 = 2611929840689750363ULL;
unsigned long long int var_11 = 15026855379295240802ULL;
int var_12 = -67621013;
unsigned long long int var_15 = 13605821463968728780ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)2755;
unsigned char var_19 = (unsigned char)54;
unsigned int var_20 = 2490323176U;
long long int var_21 = 9169670145116010312LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
