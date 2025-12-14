#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7579995437505290820LL;
signed char var_1 = (signed char)-53;
int var_2 = -1179708976;
long long int var_3 = -6512752393377524220LL;
signed char var_4 = (signed char)55;
signed char var_5 = (signed char)4;
signed char var_8 = (signed char)40;
int zero = 0;
unsigned int var_10 = 1043798919U;
unsigned int var_11 = 3557938494U;
unsigned short var_12 = (unsigned short)16698;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
