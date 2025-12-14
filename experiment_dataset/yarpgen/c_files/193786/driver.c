#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)59452;
int var_5 = -1846681741;
short var_6 = (short)4087;
int var_9 = 7157383;
int var_10 = 1031046889;
int zero = 0;
unsigned short var_11 = (unsigned short)23869;
int var_12 = 853824794;
long long int var_13 = 1646120841347506820LL;
int var_14 = 1289196722;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
