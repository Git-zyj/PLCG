#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53917;
unsigned char var_1 = (unsigned char)162;
unsigned char var_3 = (unsigned char)181;
int var_7 = -1872096205;
int var_8 = -1334549735;
unsigned char var_10 = (unsigned char)40;
unsigned short var_13 = (unsigned short)36900;
int zero = 0;
long long int var_15 = -2906145246350463130LL;
unsigned short var_16 = (unsigned short)31224;
unsigned char var_17 = (unsigned char)18;
void init() {
}

void checksum() {
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
