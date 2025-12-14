#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1452543104455725605LL;
unsigned char var_5 = (unsigned char)153;
unsigned int var_12 = 3843785344U;
unsigned long long int var_14 = 11404939936767409773ULL;
int zero = 0;
unsigned long long int var_19 = 13773308603292711625ULL;
long long int var_20 = 6278320635833839524LL;
short var_21 = (short)-9086;
unsigned char var_22 = (unsigned char)78;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
