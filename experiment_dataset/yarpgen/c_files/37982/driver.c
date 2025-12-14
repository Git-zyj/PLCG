#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8411080412533733454LL;
int var_7 = -333755236;
unsigned int var_9 = 184636461U;
int zero = 0;
unsigned char var_10 = (unsigned char)125;
long long int var_11 = -2000115163729484347LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
