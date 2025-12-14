#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = 1321083516;
unsigned int var_4 = 2511304375U;
unsigned long long int var_5 = 9391809504517293309ULL;
int var_6 = -644777602;
short var_8 = (short)23096;
int zero = 0;
int var_10 = 652314145;
unsigned long long int var_11 = 7627996595446476483ULL;
long long int var_12 = -7057563079257188009LL;
long long int var_13 = 5358318054246670908LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
