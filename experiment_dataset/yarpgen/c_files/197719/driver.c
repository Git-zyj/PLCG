#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4478199946795630127ULL;
unsigned int var_7 = 2361438772U;
long long int var_8 = -708262626770865288LL;
unsigned short var_9 = (unsigned short)16832;
int zero = 0;
unsigned long long int var_13 = 15992808369980076858ULL;
unsigned char var_14 = (unsigned char)193;
void init() {
}

void checksum() {
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
