#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5398435648418011137ULL;
int var_2 = 901164878;
unsigned int var_9 = 3265913328U;
unsigned int var_10 = 2046305055U;
int zero = 0;
long long int var_12 = 5648399542554083312LL;
unsigned char var_13 = (unsigned char)100;
unsigned short var_14 = (unsigned short)10531;
unsigned int var_15 = 3179132386U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
