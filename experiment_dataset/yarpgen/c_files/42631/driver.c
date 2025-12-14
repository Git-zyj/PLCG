#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4485410962565856318LL;
unsigned char var_3 = (unsigned char)146;
unsigned int var_5 = 831673864U;
int var_7 = -1699809944;
long long int var_9 = 6936686949032684183LL;
long long int var_10 = -5056001788944797861LL;
int zero = 0;
unsigned long long int var_12 = 10633668063607524169ULL;
long long int var_13 = 6012499512128491717LL;
unsigned char var_14 = (unsigned char)47;
void init() {
}

void checksum() {
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
