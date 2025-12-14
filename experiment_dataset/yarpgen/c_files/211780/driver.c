#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3749;
unsigned short var_2 = (unsigned short)23301;
long long int var_3 = 3692292616265898266LL;
int var_4 = -1189623220;
unsigned short var_6 = (unsigned short)4428;
unsigned char var_7 = (unsigned char)83;
unsigned short var_8 = (unsigned short)5922;
int zero = 0;
unsigned char var_13 = (unsigned char)226;
int var_14 = 858662099;
int var_15 = 247636075;
unsigned char var_16 = (unsigned char)234;
long long int var_17 = 4616512219100381295LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
