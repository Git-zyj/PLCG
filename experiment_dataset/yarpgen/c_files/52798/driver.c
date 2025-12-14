#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7608998870301376038ULL;
int var_9 = 685136225;
long long int var_11 = -4540534428389993707LL;
int var_12 = -1201646460;
unsigned short var_15 = (unsigned short)6121;
int zero = 0;
unsigned short var_19 = (unsigned short)9159;
signed char var_20 = (signed char)50;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
