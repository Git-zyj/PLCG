#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)254;
unsigned char var_5 = (unsigned char)14;
int var_17 = -1222285781;
int zero = 0;
unsigned char var_18 = (unsigned char)89;
unsigned char var_19 = (unsigned char)105;
unsigned char var_20 = (unsigned char)123;
unsigned int var_21 = 4038837517U;
unsigned char var_22 = (unsigned char)196;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
