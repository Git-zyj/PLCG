#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)98;
unsigned short var_1 = (unsigned short)50164;
unsigned long long int var_2 = 916935003317151845ULL;
long long int var_4 = -1172337192913514948LL;
int var_7 = -1383969069;
long long int var_9 = -1918823568751149268LL;
long long int var_10 = -299861556990955641LL;
int zero = 0;
long long int var_11 = 7062067810565973338LL;
unsigned long long int var_12 = 4332689939106671397ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
