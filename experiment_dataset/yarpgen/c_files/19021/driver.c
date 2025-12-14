#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 265958510742794882LL;
long long int var_2 = 937530884124505969LL;
long long int var_3 = 2508003269086649789LL;
short var_7 = (short)27833;
long long int var_9 = -648842061691293808LL;
short var_10 = (short)18923;
long long int var_12 = 4871531486359110913LL;
int zero = 0;
short var_14 = (short)-17512;
long long int var_15 = -2535427027849728238LL;
long long int var_16 = -7796292341867865645LL;
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
