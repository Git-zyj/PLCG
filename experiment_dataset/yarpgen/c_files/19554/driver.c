#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8186996404302776473LL;
unsigned long long int var_4 = 5067875080810488637ULL;
unsigned long long int var_7 = 17435252959886930324ULL;
int var_8 = 1329354420;
int zero = 0;
long long int var_11 = 1278238097750234667LL;
long long int var_12 = -6223547163324594079LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
