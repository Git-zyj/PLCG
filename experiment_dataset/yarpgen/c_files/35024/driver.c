#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3993222726295558939LL;
unsigned long long int var_2 = 5923596432827609742ULL;
unsigned short var_3 = (unsigned short)65298;
int var_5 = -213189551;
int zero = 0;
unsigned char var_14 = (unsigned char)80;
long long int var_15 = -7867748809659438729LL;
void init() {
}

void checksum() {
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
