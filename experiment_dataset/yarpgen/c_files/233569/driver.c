#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59310;
long long int var_3 = 5391898525061198678LL;
unsigned long long int var_4 = 3978761708130122436ULL;
int var_5 = 566891931;
unsigned short var_6 = (unsigned short)22261;
int var_7 = 830900906;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 2581105124U;
signed char var_12 = (signed char)100;
unsigned short var_13 = (unsigned short)34864;
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
