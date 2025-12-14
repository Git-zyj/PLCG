#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6217099802738884544LL;
unsigned char var_1 = (unsigned char)184;
unsigned int var_2 = 3381091188U;
long long int var_3 = 4102203757007610773LL;
unsigned int var_5 = 1724021863U;
unsigned short var_6 = (unsigned short)5213;
unsigned short var_7 = (unsigned short)15537;
long long int var_8 = -405213086761584902LL;
signed char var_9 = (signed char)-33;
int zero = 0;
short var_10 = (short)-19020;
unsigned long long int var_11 = 8274275762236167606ULL;
long long int var_12 = 1740531744318002311LL;
unsigned int var_13 = 1113940752U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
