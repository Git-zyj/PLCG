#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2091740094;
unsigned char var_1 = (unsigned char)248;
unsigned char var_2 = (unsigned char)142;
unsigned int var_4 = 961376453U;
unsigned int var_6 = 1698557414U;
unsigned short var_7 = (unsigned short)57050;
unsigned char var_8 = (unsigned char)12;
int var_9 = 1856374843;
int var_11 = -1994096659;
int zero = 0;
long long int var_14 = 8405118596096083111LL;
signed char var_15 = (signed char)5;
short var_16 = (short)15031;
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
