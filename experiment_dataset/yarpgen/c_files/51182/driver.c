#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-17;
long long int var_3 = -752375742008287652LL;
_Bool var_4 = (_Bool)1;
int var_6 = 1851504428;
_Bool var_10 = (_Bool)1;
int var_11 = -1418418918;
int zero = 0;
unsigned char var_12 = (unsigned char)62;
unsigned char var_13 = (unsigned char)177;
void init() {
}

void checksum() {
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
