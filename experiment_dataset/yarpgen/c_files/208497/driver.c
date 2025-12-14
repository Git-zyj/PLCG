#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2098911206440988698LL;
signed char var_3 = (signed char)-9;
long long int var_4 = 4559117569338126605LL;
unsigned int var_5 = 2530387361U;
int zero = 0;
unsigned short var_11 = (unsigned short)51476;
unsigned char var_12 = (unsigned char)211;
unsigned long long int var_13 = 3771978311734431796ULL;
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
