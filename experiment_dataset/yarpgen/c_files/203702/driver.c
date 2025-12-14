#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-64;
unsigned char var_10 = (unsigned char)112;
unsigned long long int var_15 = 2544945809390181666ULL;
unsigned char var_17 = (unsigned char)186;
unsigned char var_18 = (unsigned char)121;
long long int var_19 = 7713621921768395305LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = -1600742586;
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
