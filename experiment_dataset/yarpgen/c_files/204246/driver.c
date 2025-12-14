#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7866;
unsigned short var_1 = (unsigned short)18927;
_Bool var_2 = (_Bool)0;
unsigned char var_9 = (unsigned char)229;
unsigned int var_10 = 950587370U;
long long int var_11 = -1383963102814076848LL;
int zero = 0;
unsigned long long int var_18 = 478896494031172079ULL;
long long int var_19 = -1256305436682723534LL;
short var_20 = (short)-7316;
unsigned int var_21 = 3139585934U;
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
