#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8289165994318949041ULL;
unsigned char var_1 = (unsigned char)138;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 101732229U;
long long int var_5 = -7738587511901735572LL;
unsigned long long int var_9 = 3481716737554106797ULL;
unsigned char var_12 = (unsigned char)155;
int zero = 0;
long long int var_13 = -9165158396732470967LL;
short var_14 = (short)-16508;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
