#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4836;
unsigned long long int var_2 = 18224908542673324612ULL;
unsigned short var_4 = (unsigned short)5906;
unsigned long long int var_5 = 1296928808987112983ULL;
unsigned short var_8 = (unsigned short)50442;
short var_12 = (short)-29216;
int zero = 0;
int var_16 = 381446514;
unsigned char var_17 = (unsigned char)101;
_Bool var_18 = (_Bool)1;
int var_19 = -1002566193;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
