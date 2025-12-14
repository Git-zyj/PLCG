#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7348141826241506183LL;
unsigned char var_5 = (unsigned char)79;
unsigned long long int var_6 = 11741233677723139839ULL;
long long int var_9 = 8777904002017925204LL;
int zero = 0;
long long int var_11 = -5370824098991866572LL;
int var_12 = -169163722;
int var_13 = -239111174;
unsigned int var_14 = 9489852U;
void init() {
}

void checksum() {
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
