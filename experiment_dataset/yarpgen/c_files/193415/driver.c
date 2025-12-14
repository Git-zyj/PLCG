#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-27446;
short var_6 = (short)-23259;
unsigned long long int var_8 = 11704129964769026899ULL;
int zero = 0;
short var_12 = (short)13789;
unsigned long long int var_13 = 13856756873163150469ULL;
void init() {
}

void checksum() {
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
