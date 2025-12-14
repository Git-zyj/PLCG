#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)20626;
signed char var_8 = (signed char)9;
long long int var_9 = 3283778346339949149LL;
long long int var_10 = -6373379177467393090LL;
short var_11 = (short)-28812;
unsigned char var_12 = (unsigned char)119;
int zero = 0;
unsigned short var_13 = (unsigned short)21750;
unsigned short var_14 = (unsigned short)31708;
long long int var_15 = -2479260133281407990LL;
short var_16 = (short)-11332;
int var_17 = 1027495906;
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
