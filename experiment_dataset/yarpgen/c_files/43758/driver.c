#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 237298285;
unsigned char var_4 = (unsigned char)193;
unsigned char var_5 = (unsigned char)87;
unsigned long long int var_7 = 1647679054133765613ULL;
unsigned char var_9 = (unsigned char)219;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)180;
unsigned long long int var_12 = 3484759437528728853ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 5104576831017883543ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
