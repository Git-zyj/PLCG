#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44785;
int var_2 = 759366107;
unsigned int var_10 = 1990435083U;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2228019188U;
unsigned char var_21 = (unsigned char)217;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
