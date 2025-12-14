#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)2522;
unsigned long long int var_7 = 13530442196114465907ULL;
int zero = 0;
unsigned int var_18 = 1600712317U;
unsigned long long int var_19 = 2353103988861926592ULL;
long long int var_20 = -4907318545589472168LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
