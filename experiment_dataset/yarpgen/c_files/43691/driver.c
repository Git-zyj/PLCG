#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 100405149U;
unsigned char var_2 = (unsigned char)142;
signed char var_3 = (signed char)68;
unsigned char var_4 = (unsigned char)17;
unsigned int var_5 = 1029051007U;
long long int var_8 = 7584958913687568405LL;
int var_9 = -361588550;
int var_12 = 15841275;
unsigned char var_13 = (unsigned char)208;
int zero = 0;
int var_14 = -1425256258;
unsigned char var_15 = (unsigned char)67;
unsigned short var_16 = (unsigned short)27227;
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
