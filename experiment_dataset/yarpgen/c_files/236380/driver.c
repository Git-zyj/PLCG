#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60054;
short var_8 = (short)-28264;
unsigned char var_9 = (unsigned char)187;
long long int var_10 = -3429657527592936149LL;
int zero = 0;
unsigned char var_11 = (unsigned char)203;
short var_12 = (short)28487;
short var_13 = (short)-27204;
_Bool var_14 = (_Bool)0;
int var_15 = 1970346108;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
