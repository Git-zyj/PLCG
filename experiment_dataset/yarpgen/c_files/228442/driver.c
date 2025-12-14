#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17589477834504868244ULL;
unsigned long long int var_3 = 10839594925240686421ULL;
unsigned short var_7 = (unsigned short)14878;
unsigned int var_9 = 1232518489U;
int zero = 0;
unsigned int var_13 = 1153955053U;
unsigned long long int var_14 = 10408616190897241272ULL;
short var_15 = (short)-3206;
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
