#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1159269751;
int var_1 = 481049312;
long long int var_2 = 2374108151132093067LL;
long long int var_3 = -1753313091546524685LL;
int var_8 = -593066375;
unsigned short var_11 = (unsigned short)57051;
unsigned int var_12 = 1261970910U;
int zero = 0;
long long int var_13 = -8639305955606947077LL;
int var_14 = 1576445004;
unsigned char var_15 = (unsigned char)99;
long long int var_16 = -7600579316408776882LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
