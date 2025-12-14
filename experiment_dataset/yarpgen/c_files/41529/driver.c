#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7389765513082973268LL;
unsigned char var_4 = (unsigned char)186;
unsigned char var_5 = (unsigned char)141;
unsigned char var_6 = (unsigned char)172;
signed char var_9 = (signed char)-1;
long long int var_11 = -3157654519649468034LL;
long long int var_13 = 4248691569371259425LL;
unsigned char var_16 = (unsigned char)234;
int zero = 0;
int var_18 = -1622015924;
unsigned char var_19 = (unsigned char)102;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
