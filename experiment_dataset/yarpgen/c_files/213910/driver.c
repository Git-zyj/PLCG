#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)186;
signed char var_1 = (signed char)-45;
signed char var_3 = (signed char)11;
signed char var_4 = (signed char)38;
int var_6 = -1582968593;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 1266412606U;
int zero = 0;
short var_10 = (short)-26179;
unsigned long long int var_11 = 15142469051656282497ULL;
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
