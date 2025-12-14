#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1155321039;
short var_3 = (short)-20531;
int var_4 = 1069273983;
int zero = 0;
int var_12 = -1036255294;
unsigned short var_13 = (unsigned short)42063;
unsigned long long int var_14 = 16477296832010346256ULL;
void init() {
}

void checksum() {
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
