#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)78;
short var_10 = (short)-19759;
int var_11 = -1985838138;
signed char var_13 = (signed char)40;
long long int var_14 = 609732446144572594LL;
unsigned short var_15 = (unsigned short)29984;
short var_17 = (short)16066;
int zero = 0;
short var_19 = (short)-5740;
short var_20 = (short)-7606;
short var_21 = (short)-2877;
int var_22 = 1712886505;
unsigned char var_23 = (unsigned char)71;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
