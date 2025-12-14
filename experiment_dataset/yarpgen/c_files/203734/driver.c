#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -807973822;
long long int var_2 = 2321255431175907478LL;
signed char var_3 = (signed char)-95;
unsigned char var_4 = (unsigned char)246;
unsigned int var_6 = 3778558964U;
long long int var_9 = 6317940325194359409LL;
long long int var_11 = 6019513082411311129LL;
signed char var_13 = (signed char)-75;
int zero = 0;
signed char var_14 = (signed char)4;
unsigned short var_15 = (unsigned short)9052;
long long int var_16 = 547262268481344578LL;
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
