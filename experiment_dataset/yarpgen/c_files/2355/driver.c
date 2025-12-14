#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5728785806463894750ULL;
unsigned short var_1 = (unsigned short)46957;
unsigned short var_2 = (unsigned short)29160;
int var_3 = 399267057;
unsigned short var_4 = (unsigned short)18778;
int var_5 = -1708009437;
short var_9 = (short)5467;
long long int var_11 = -3070179124803978356LL;
short var_12 = (short)-19423;
int zero = 0;
unsigned short var_14 = (unsigned short)22855;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)3;
unsigned int var_17 = 2583920797U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
