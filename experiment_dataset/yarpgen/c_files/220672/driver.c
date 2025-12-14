#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 325372821;
unsigned long long int var_4 = 9724806660827356349ULL;
unsigned short var_5 = (unsigned short)48520;
int var_9 = -1074568209;
unsigned short var_11 = (unsigned short)37659;
unsigned int var_12 = 2536967758U;
int var_13 = -1069911654;
int zero = 0;
int var_14 = -1773705275;
int var_15 = -493593285;
signed char var_16 = (signed char)87;
int var_17 = -239368112;
void init() {
}

void checksum() {
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
