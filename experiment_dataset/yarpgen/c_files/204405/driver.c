#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)13918;
unsigned int var_7 = 2943250905U;
unsigned long long int var_9 = 15488748939279662272ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)30;
int var_12 = -1030524090;
long long int var_13 = -7584164786558855131LL;
void init() {
}

void checksum() {
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
