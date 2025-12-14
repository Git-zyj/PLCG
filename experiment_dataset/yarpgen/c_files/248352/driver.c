#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)15259;
short var_8 = (short)-19713;
unsigned long long int var_9 = 8165991417340218570ULL;
_Bool var_10 = (_Bool)0;
unsigned short var_15 = (unsigned short)48443;
int zero = 0;
short var_19 = (short)-2769;
int var_20 = -947626237;
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
