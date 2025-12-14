#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)1;
unsigned char var_1 = (unsigned char)4;
unsigned long long int var_2 = 5157684428425239623ULL;
int var_3 = -2130296902;
unsigned char var_4 = (unsigned char)33;
int var_5 = -1247105732;
unsigned long long int var_6 = 10751265592286743858ULL;
int var_7 = 51624237;
unsigned long long int var_8 = 7666412163118087123ULL;
unsigned char var_9 = (unsigned char)244;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 555451854U;
long long int var_12 = -3906241278387412134LL;
unsigned int var_13 = 306705053U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
