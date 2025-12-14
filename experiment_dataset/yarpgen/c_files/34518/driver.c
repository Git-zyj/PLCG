#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1141899758U;
long long int var_2 = 1915463267837638855LL;
signed char var_3 = (signed char)16;
unsigned int var_9 = 2567443875U;
unsigned long long int var_11 = 11948892851869207642ULL;
unsigned long long int var_14 = 15697829471114794157ULL;
unsigned int var_17 = 2912058186U;
int var_18 = -1531758236;
int zero = 0;
unsigned int var_20 = 3740564967U;
unsigned short var_21 = (unsigned short)34855;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
