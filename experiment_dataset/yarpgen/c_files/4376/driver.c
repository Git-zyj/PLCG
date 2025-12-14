#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9632733826786969500ULL;
int var_2 = -2020251815;
int var_9 = 392212521;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 5963171894164101613ULL;
signed char var_15 = (signed char)-83;
unsigned short var_16 = (unsigned short)52740;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
