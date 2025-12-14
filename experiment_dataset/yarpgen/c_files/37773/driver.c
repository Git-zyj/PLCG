#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -845556623;
int var_1 = 1593468816;
int var_2 = -1510376591;
int var_4 = -337147132;
int var_5 = -549624354;
int var_7 = -2006566465;
int var_8 = 1214363316;
int var_9 = 1961224500;
int var_10 = -589730284;
int var_13 = -1156978459;
int zero = 0;
int var_15 = -351568109;
int var_16 = -1431482527;
int var_17 = 992467170;
int var_18 = -54009776;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
