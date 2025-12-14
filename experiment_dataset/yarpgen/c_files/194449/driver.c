#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -2354061107853959029LL;
int var_10 = -1714232348;
long long int var_11 = 3800469080613741198LL;
unsigned short var_12 = (unsigned short)23275;
unsigned int var_15 = 2350564300U;
unsigned long long int var_17 = 2524687382381274124ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)39;
unsigned short var_19 = (unsigned short)7835;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
