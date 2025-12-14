#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 489442085;
int var_5 = 577034474;
int var_8 = -989409522;
unsigned short var_9 = (unsigned short)35291;
long long int var_12 = -3197173312777036907LL;
int zero = 0;
int var_20 = -1401804815;
unsigned short var_21 = (unsigned short)37328;
int var_22 = 1314885603;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
