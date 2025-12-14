#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1475337280;
long long int var_1 = 3666125708424643642LL;
unsigned char var_3 = (unsigned char)105;
long long int var_6 = 8825853857197210499LL;
signed char var_8 = (signed char)4;
int zero = 0;
long long int var_10 = -5851045790292891957LL;
unsigned int var_11 = 4179890225U;
unsigned char var_12 = (unsigned char)175;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
